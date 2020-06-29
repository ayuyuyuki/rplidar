/**
 * @file /include/mul_t/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef test3_QNODE_HPP_
#define test3_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
//#ifndef Q_MOC_RUN
#include <ros/ros.h>
#include <std_msgs/String.h>
#include "std_msgs/Float64.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
//#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <geometry_msgs/Point.h> //点 消息类型
#include <geometry_msgs/QuaternionStamped.h> //可以在rviz中显示
#include <QImage>
#include "std_msgs/Int8.h"
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace test3 {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
    QNode(int argc, char** argv );

    virtual ~QNode();
    bool init();
    bool init(const std::string &master_url, const std::string &host_url);
    void run();
  void myCallback(const geometry_msgs::Quaternion&angle_point);//string callback function
  void Callback(const std_msgs::Float64 &subhight);
  QStringListModel* loggingModel_sub() { return &logging_model_sub; }
  void myCallback_img(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img2(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img3(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img4(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img5(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img6(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img7(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  void myCallback_img8(const sensor_msgs::ImageConstPtr& msg);//camera callback function
  //void sent_cmd(std_msgs::Float64 hight_in); //add
  void sent_cmd_close(std_msgs::Int8 close_uvc);
  QString str;
  cv::Mat img;
  QImage image;
  QImage image2;
  QImage image3;
  QImage image4;
  QImage image5;
  QImage image6;
  QImage image7;
  QImage image8;
  cv::Mat img2;
  cv::Mat img3;
  cv::Mat img4;
  cv::Mat img5;
  cv::Mat img6;
  cv::Mat img7;
  cv::Mat img8;

    /*********************
    ** Logging
    **********************/
    enum LogLevel {
             Debug,
             Info,
             Warn,
             Error,
             Fatal
     };

    QStringListModel* loggingModel() { return &logging_model; }

 // const QString* logstring(){return &str;}
    void log2(const LogLevel &level, const std::string &msg);
    void log(const LogLevel &level, const geometry_msgs::Quaternion &msg);
    void log_sub(const LogLevel &level, const std_msgs::Float64 &msg);

Q_SIGNALS:
    void loggingUpdated();//center_point
    void rosShutdown();
    //void stringimageSignal(QString);
    void loggingstring();
    void loggingCamera();
    void loggingUpdated_sub();//hight
    void loggingCamera2();
    void loggingCamera3();
    void loggingCamera4();
    void loggingCamera5();
    void loggingCamera6();
    void loggingCamera7();
    void loggingCamera8();
private:
    int init_argc;
    char** init_argv;
    ros::Publisher chatter_publisher;
    ros::Publisher close_pub;
 ros::Subscriber chatter_subscriber;
 ros::Subscriber chatter_subscriber_center;
   ros::Subscriber hight_subscriber;
       QStringListModel logging_model_sub;
  QStringListModel logging_model;
  image_transport::Subscriber image_sub;
  image_transport::Subscriber image_sub2;
  image_transport::Subscriber image_sub3;
  image_transport::Subscriber image_sub4;
  image_transport::Subscriber image_sub5;
  image_transport::Subscriber image_sub6;
  image_transport::Subscriber image_sub7;
  image_transport::Subscriber image_sub8;

};

}  // namespace test3

#endif /* mul_t_QNODE_HPP_ */
