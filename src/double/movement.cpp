#include <ros/ros.h>
#include <geometry_msgs/Point.h> //点 消息类型
#include <geometry_msgs/PointStamped.h> //可以在rviz中显示
#include <iostream>
#include <stdio.h>
#include<std_msgs/String.h>
#include<geometry_msgs/QuaternionStamped.h>
#define SUBSCRIBE_FREQUENCY 5 //计算3D坐标的频率，根据图像2D坐标发布频率调节
geometry_msgs::Point center_point; //no在rviz中显示
geometry_msgs::Quaternion angle;
using namespace std;
ros::Publisher centerpointpub;
ros::Publisher anglepub;
geometry_msgs::Point Point_first, Point_second;
void firstCallback(const geometry_msgs::PointStamped& target3DPosition_first) //形参到底怎么写
{
  Point_first = target3DPosition_first.point;
}

void secondCallback(const geometry_msgs::PointStamped& target3DPositionecon_second)
{
  Point_second = target3DPositionecon_second.point;
}

void calcenter(geometry_msgs::Point& firstpoint, geometry_msgs::Point& secondpoint)
{
  //center_point.header.frame_id = "/map";
 // center_point.header.stamp = ros::Time::now();
  if(firstpoint.x ==0 || secondpoint.x == 0 || firstpoint.x == secondpoint.x)//这三种情况下不能计算
  {
     center_point.x = 0;
     center_point.y = 0;
     center_point.z = 0;
  }
  else
  {
     center_point.x = (firstpoint.x + secondpoint.x)/2;
     center_point.y = (firstpoint.y + secondpoint.y)/2;
    center_point.z = (firstpoint.z + secondpoint.z)/2;//za suan a  bu hui a
  }
  centerpointpub.publish(center_point);
}
void calangle(geometry_msgs::Point& firstpoint, geometry_msgs::Point& secondpoint)//have some problem
{
    //angle.header.frame_id = "/map";
   // angle.header.stamp = ros::Time::now();
    if(firstpoint.x ==0 || secondpoint.x == 0 || firstpoint.x == secondpoint.x||firstpoint.y==0|| secondpoint.y == 0 || firstpoint.y == secondpoint.y)//这三种情况下不能计算
    {
       angle.x = 2;
       angle.y = 2;
       angle.z = 0;
       angle.w=4;
    }
    else{
 angle.x=(firstpoint.x + secondpoint.x)/2-10;
 angle.y=(firstpoint.y + secondpoint.y)/2-10;
 angle.z=(firstpoint.z + secondpoint.z)/2;
 angle.w=(firstpoint.y - secondpoint.y)/(firstpoint.x - secondpoint.x);
    }
  anglepub.publish(angle);
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "movement"); //节点名称：movement
  ros::NodeHandle nh; //创建与master通信的节点
  ros::Rate r(SUBSCRIBE_FREQUENCY); //执行频率5Hz
  centerpointpub = nh.advertise<geometry_msgs::Point>("/movement/center_point", 1); //发布话题：target_3Dposition
  anglepub = nh.advertise<geometry_msgs::Quaternion>("/movement/angle", 1); //发布话题：target_3Dposition
  ros::Subscriber firstpointsub = nh.subscribe("target_3Dposition", 1, firstCallback); //订阅左图像话题
  ros::Subscriber secondpointsub = nh.subscribe("target_3Dposition_second", 1, secondCallback); //订阅右图像话题
//  message_filters::Subscriber<geometry_msgs::Point> left2DPositionSub(nh, "/left_2Dposition", 1);
//  message_filters::Subscriber<geometry_msgs::Point> right2DPositionSub(nh, "/right_2Dposition", 1);
//  TimeSynchronizer<geometry_msgs::Point, geometry_msgs::Point> sync(left2DPositionSub, right2DPositionSub, 1);
//  sync.registerCallback(boost::bind(&Cal3DPosCallback, _1, _2)); //放到一个回调函数中
  while(ros::ok())
  {
    calcenter(Point_first, Point_second);
    calangle(Point_first, Point_second);
    ros::spinOnce(); //不能忘！！缺少则无法调用回调函数
    r.sleep();
  }

  return 0;
}
