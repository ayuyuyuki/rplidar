/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/test3/qnode.hpp"
#include "sensor_msgs/image_encodings.h"

//namespace enc = sensor_msgs::image_encodings;
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace test3 {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
    init_argc(argc),
    init_argv(argv)
    {}

QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
    wait();
}

void QNode::myCallback(const geometry_msgs::Quaternion&angle_point)
{ //ROS_INFO("I heard a center point %s:", center_point.header.frame_id.c_str());
  ROS_INFO("(x,y,z), %f, %f,%f,%f",angle_point.x,angle_point.y,angle_point.z,angle_point.w);
   // ROS_INFO("I heard: [%f]", msg->data.c_str());
    log(Info,angle_point);
   // str = center_point.y;

    //Q_EMIT stringimageSignal(str);
    Q_EMIT loggingstring();
}

void QNode::myCallback_img(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    //cv::imshow("gui_subscriber", cv_bridge::toCvShare(msg, "bgr8")->image);
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img = cv_ptr->image;
    //QImage image(conversion_mat_.data, conversion_mat_.cols, conversion_mat_.rows, conversion_mat_.step[0], QImage::Format_RGB888);
    image = QImage(img.data,img.cols,img.rows,img.step[0],QImage::Format_RGB888);
    //img = cv_bridge::toCvShare(msg, "bgr8")->image;
    //ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera();
    //cv::waitKey(33);
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::myCallback_img2(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img2 = cv_ptr->image;
    image2 = QImage(img2.data,img2.cols,img2.rows,img2.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera2();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::myCallback_img3(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img3 = cv_ptr->image;
    image3 = QImage(img3.data,img3.cols,img3.rows,img3.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera3();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::myCallback_img4(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img4 = cv_ptr->image;
    image4 = QImage(img4.data,img4.cols,img4.rows,img4.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera4();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::myCallback_img5(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img5 = cv_ptr->image;
    image5 = QImage(img5.data,img5.cols,img5.rows,img5.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera5();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}void QNode::myCallback_img6(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img6 = cv_ptr->image;
    image6 = QImage(img6.data,img6.cols,img6.rows,img6.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera6();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}void QNode::myCallback_img7(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img7 = cv_ptr->image;
    image7 = QImage(img7.data,img7.cols,img7.rows,img7.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera7();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::myCallback_img8(const sensor_msgs::ImageConstPtr &msg)
{
  try
  {
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::RGB8);
    img8 = cv_ptr->image;
    image8 = QImage(img8.data,img8.cols,img8.rows,img8.step[0],QImage::Format_RGB888);//change  to QImage format
    ROS_INFO("I'm setting picture in mul_t callback function!");
    Q_EMIT loggingCamera8();
  }
catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}
void QNode::Callback(const std_msgs::Float64 &subhight)
{
  log_sub(Info, subhight);
}

void QNode::log_sub( const LogLevel &level, const std_msgs::Float64 &msg)
{
  logging_model_sub.insertRows(logging_model_sub.rowCount(),1);
  std::stringstream logging_model_msg;
  switch ( level ) {
    case(Debug) : {
        ROS_DEBUG_STREAM(msg);
        logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Info) : {
        ROS_INFO_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Warn) : {
        ROS_WARN_STREAM(msg);
        logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Error) : {
        ROS_ERROR_STREAM(msg);
        logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
        break;
    }
    case(Fatal) : {
        ROS_FATAL_STREAM(msg);
        logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
        break;
    }
  }
  QVariant new_row(QString(logging_model_msg.str().c_str()));
 logging_model_sub.setData(logging_model_sub.index(logging_model_sub.rowCount()-1),new_row);
  Q_EMIT loggingUpdated_sub(); // used to readjust the scrollbar
}
/**void QNode::sent_cmd(std_msgs::Float64 hight_in)// add
{
    if(ros::ok())
{
       // std_msgs::String msg;
       chatter_publisher.publish(hight_in);
       //std :: stringstream ss;
      // ss <<"clicked the button";
      // msg.data=ss.str();
      // log2(Info,msg);
       ros::spinOnce();
}
}**/
void QNode::sent_cmd_close(std_msgs::Int8 close_uvc)// add
{
    if(ros::ok())
{
       // std_msgs::String msg;
       close_pub.publish(close_uvc);
       //std :: stringstream ss;
      // ss <<"clicked the button";
      // msg.data=ss.str();
      // log2(Info,msg);
       ros::spinOnce();
}
}
bool QNode::init() {
    ros::init(init_argc,init_argv,"test3");

    if ( ! ros::master::check() ) {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    ros::NodeHandle n;
  image_transport::ImageTransport it(n);

    // Add your ros communications here.
  chatter_subscriber_center = n.subscribe("/movement/angle",1,&QNode::myCallback,this);
  image_sub = it.subscribe("edge_detector/left_image",100,&QNode::myCallback_img,this);//相机尝试
  image_sub2 = it.subscribe("/left/image_raw",100,&QNode::myCallback_img2,this);
  chatter_subscriber = n.subscribe("chatter", 1000, &QNode::Callback, this); //订阅串口出来的高度
  image_sub3 = it.subscribe("/edge_detector/right_image",100,&QNode::myCallback_img3,this);
  image_sub4 = it.subscribe("/right/image_raw",100,&QNode::myCallback_img4,this);
  image_sub5 = it.subscribe("/edge_detector/left_image_second",100,&QNode::myCallback_img5,this);
  image_sub6 = it.subscribe("/left/image_raw",100,&QNode::myCallback_img6,this);
  image_sub7 = it.subscribe("/edge_detector/right_image_second",100,&QNode::myCallback_img7,this);
  image_sub8 = it.subscribe("/right/image_raw",100,&QNode::myCallback_img8,this);
  chatter_publisher = n.advertise<std_msgs::Float64>("hight", 1000);//发布高度给雷达（编辑框）
  close_pub = n.advertise<std_msgs::Int8>("num", 100);//发布stop_uvc

    start();
    return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
    std::map<std::string,std::string> remappings;
    remappings["__master"] = master_url;
    remappings["__hostname"] = host_url;
    ros::init(remappings,"test3");
    if ( ! ros::master::check() ) {
        return false;
    }
    ros::start(); // explicitly needed since our nodehandle is going out of scope.
    ros::NodeHandle n;
  image_transport::ImageTransport it(n);

    // Add your ros communications here.
  chatter_subscriber_center = n.subscribe("/movement/angle",1,&QNode::myCallback,this);
  chatter_subscriber = n.subscribe("chatter", 1000, &QNode::Callback, this); //add
  image_sub2 = it.subscribe("/left/image_raw",100,&QNode::myCallback_img2,this);

  image_sub = it.subscribe("edge_detector/left_image",100,&QNode::myCallback_img,this);//相机尝试
  image_sub3 = it.subscribe("/edge_detector/right_image",100,&QNode::myCallback_img3,this);
  image_sub4 = it.subscribe("/right/image_raw",100,&QNode::myCallback_img4,this);
  image_sub5 = it.subscribe("/edge_detector/left_image_second",100,&QNode::myCallback_img5,this);
  image_sub6 = it.subscribe("/left/image_raw",100,&QNode::myCallback_img6,this);
  image_sub7 = it.subscribe("/edge_detector/right_image_second",100,&QNode::myCallback_img7,this);
  image_sub8 = it.subscribe("/right/image_raw",100,&QNode::myCallback_img8,this);
  chatter_publisher = n.advertise<std_msgs::Float64>("hight", 1000);
  close_pub = n.advertise<std_msgs::Int8>("num", 100);//发布stop_uvc

    start();
    return true;
}

void QNode::run() {
 //ros::Rate loop_rate(1);
    //int count = 0;
  //while ( ros::ok() ) {

       // std_msgs::String msg;
      //  std::stringstream ss;
        //ss << "hello world " << count;
       // msg.data = ss.str();
     // std_msgs::Float64 msg;
      //msg.data=1;
        //chatter_publisher.publish(msg);
        //log(Info,std::string("I sent: ")+msg.data);
       // ros::spinOnce();
      //  loop_rate.sleep();
        //++count;
//  }
  //ROS_INFO("I'm running!");
 log2(Info,"I'm running!");
  ros::spin();
    std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}




void QNode::log2(const LogLevel &level, const std::string &msg) {
    logging_model.insertRows(logging_model.rowCount(),1);
    std::stringstream logging_model_msg;
    switch ( level ) {
        case(Debug) : {
                ROS_DEBUG_STREAM(msg);
                logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Info) : {
                ROS_INFO_STREAM(msg);
                logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Warn) : {
                ROS_WARN_STREAM(msg);
                logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Error) : {
                ROS_ERROR_STREAM(msg);
                logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Fatal) : {
                ROS_FATAL_STREAM(msg);
                logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
                break;
        }
    }
    QVariant new_row(QString(logging_model_msg.str().c_str()));
    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
    Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}
void QNode::log( const LogLevel &level, const geometry_msgs::Quaternion&msg) {
    logging_model.insertRows(logging_model.rowCount(),1);
    std::stringstream logging_model_msg;
    switch ( level ) {
        case(Debug) : {
                ROS_DEBUG_STREAM(msg);
                logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Info) : {
                ROS_INFO_STREAM(msg);
                logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Warn) : {
                ROS_WARN_STREAM(msg);
                logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Error) : {
                ROS_ERROR_STREAM(msg);
                logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
                break;
        }
        case(Fatal) : {
                ROS_FATAL_STREAM(msg);
                logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
                break;
        }
    }
    QVariant new_row(QString(logging_model_msg.str().c_str()));
    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row);
    Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}

}  // namespace mul_t
