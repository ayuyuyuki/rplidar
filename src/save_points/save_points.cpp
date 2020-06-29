#include <ros/ros.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include<std_msgs/String.h>
#include"std_msgs/Float64.h"
#include<geometry_msgs/QuaternionStamped.h>
#define SUBSCRIBE_FREQUENCY 5 //保存3D坐标的频率，根据图像2D坐标发布频率调节
geometry_msgs::Quaternion angle_point;
std_msgs::Float64 height;
void callback(const geometry_msgs::Quaternion& center_point)
{
  angle_point = center_point;
}
void callback2(const std_msgs::Float64 &hight_v)
{

    height=hight_v;

}
void save(geometry_msgs::Quaternion angle){

      // std_msgs::String ss;
      // ss ="x y z w";
      std::ofstream location_out;
     const char* name;
      name=(char*)&height.data;
       location_out.open("name", std::ios::out | std::ios::app);  //以写入和在文件末尾添加的方式打开.txt文件，没有的话就创建该文件。
      if (location_out.is_open())
          //  return 0;
       //location_out << ss << endl;
      {  location_out <<angle.x<<" ";
          location_out <<angle.y<<" ";
          location_out <<angle.z<<" ";
          location_out <<angle.w<<"\n";
          location_out <<height<<"\n";

        location_out.close();}
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "save_points"); //节点名称
  ros::NodeHandle nh; //创建与master通信的节点
  ros::Rate r(SUBSCRIBE_FREQUENCY); //执行频率5Hz
   ros::Subscriber anglesub = nh.subscribe("/movement/angle",1, callback); //订阅话题
   ros::Subscriber heightsub =nh.subscribe("/chatter",1, callback2); //订阅话题
  while(ros::ok())
  {
    save(angle_point);
    ros::spinOnce(); //不能忘！！缺少则无法调用回调函数
    r.sleep();
  }

  return 0;
}
