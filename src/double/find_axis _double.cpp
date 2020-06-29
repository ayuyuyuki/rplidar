#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <geometry_msgs/Point.h> //点 消息类型

static const std::string OPENCV_WINDOW = "Raw Image window";
static const std::string OPENCV_WINDOW_left = "Raw Image window_left";
static const std::string OPENCV_WINDOW_1 = "Edge Detection";
using namespace cv;
using namespace std;
class Edge_Detector
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  image_transport::Subscriber image_sub_left;
  image_transport::Publisher image_pub_;
  ros::Publisher leftPointPub;
  image_transport::Publisher image_pub_left;
  ros::Publisher rightPointPub;


public:
  Edge_Detector()
    : it_(nh_)
  {
    // Subscribe to input video feed and publish output video feed
    image_sub_ = it_.subscribe("/left/image_raw", 1,
      &Edge_Detector::right_imageCb, this);
    image_sub_left= it_.subscribe("/right/image_raw", 1,
      &Edge_Detector::left_imageCb, this);
    image_pub_ = it_.advertise("/edge_detector/right_image", 1);
    image_pub_left = it_.advertise("/edge_detector/left_image", 1);
    leftPointPub = nh_.advertise<geometry_msgs::Point>("/edge_detector/left_2Dposition", 1); //发布话题：left_2Dposition
    rightPointPub = nh_.advertise<geometry_msgs::Point>("/edge_detector/right_2Dposition", 1); //发布话题：right_2Dposition
    //cv::namedWindow(OPENCV_WINDOW);

  }

  ~Edge_Detector()
  {
    cv::destroyWindow(OPENCV_WINDOW);
    cv::destroyWindow(OPENCV_WINDOW_left);

  }

//回调函数
  void right_imageCb(const sensor_msgs::ImageConstPtr& msg)
  {
      geometry_msgs::Point rightObjectCenter;

    cv_bridge::CvImagePtr cv_ptr;
    namespace enc = sensor_msgs::image_encodings;

    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception: %s", e.what());
      return;
    }

    // Draw an example circle on the video stream
    if (cv_ptr->image.rows > 200 && cv_ptr->image.cols > 300){
        RotatedRect rightFaceRectangle = detect_edges(cv_ptr->image);


   // detect_edges(cv_ptr->image);
Mat imag=cv_ptr->image;

        image_pub_.publish(cv_ptr->toImageMsg());
        rightObjectCenter.x = rightFaceRectangle.center.x;
        rightObjectCenter.y = rightFaceRectangle.center.y;
      rightPointPub.publish(rightObjectCenter); //发布得到的目标坐标点
        cv::imshow(OPENCV_WINDOW, imag);
        cv::waitKey(3);

    }
  }
  //left
  void left_imageCb(const sensor_msgs::ImageConstPtr& msg)
  {
      geometry_msgs::Point leftObjectCenter;

    cv_bridge::CvImagePtr cv_ptr;
    namespace enc = sensor_msgs::image_encodings;

    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception: %s", e.what());
      return;
    }

    // Draw an example circle on the video stream
    if (cv_ptr->image.rows > 200 && cv_ptr->image.cols > 300){
        RotatedRect leftFaceRectangle = detect_edges(cv_ptr->image);

    //detect_edges(cv_ptr->image);
        image_pub_left.publish(cv_ptr->toImageMsg());
        Mat imag=cv_ptr->image;
        leftObjectCenter.x = leftFaceRectangle.center.x;
        leftObjectCenter.y = leftFaceRectangle.center.y;
      leftPointPub.publish(leftObjectCenter); //发布得到的目标坐标点

        cv::imshow(OPENCV_WINDOW_left, imag);
        cv::waitKey(3);
    }
  }
  //OpenCV的边缘检测程序
  RotatedRect detect_edges(cv::Mat img)
  {
RotatedRect faceRectangle = RotatedRect(Point2i(0, 0), Size2i(0, 0), 0);//旋转矩形类（矩形中心 边长 旋转角度）
    cv::Mat src, src_gray;
    cv::Mat dst, detected_edges,OtsuImage;
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    int edgeThresh = 1;
    int lowThreshold = 200;
    int highThreshold =300;
    int kernel_size = 5;

    int largest_area = 0;
    int largest_contour_index = 0;
    int smallest_area = 0;
    int smallest_contour_index = 0;
    Mat1b mask1, mask2;
    img.copyTo(src);
    Mat img2,mask;
    img.copyTo(src);
    Rect r1(0, 0, 142, 239);
       mask = Mat::zeros(img.size(), CV_8UC3);
       mask(r1).setTo(255);
       img.copyTo(img2, mask);
    //cv::cvtColor( img, src_gray, CV_BGR2GRAY );
    cv::cvtColor( img2, src_gray, cv::COLOR_BGR2GRAY );
    cv::blur( src_gray, detected_edges, cv::Size(5,5) );
   // cv::equalizeHist( detected_edges, detected_edges ); //直方图均衡化，拉伸像素使其分布到0-255,增加对比度
    //inRange(detected_edges, Scalar(0, 80, 50), Scalar(10, 255, 100), mask1);
    //inRange(detected_edges, Scalar(160, 80, 50), Scalar(180, 255, 100), mask2);
   // Mat1b dstImg = mask1 | mask2;
    threshold(detected_edges,OtsuImage,200,255,THRESH_OTSU);//0不起作用，可为任意阈值
    cv::findContours( OtsuImage, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );
    vector<Moments> mu(contours.size() );
for( int i = 0; i < contours.size(); i++ )
        {
         // double a = contourArea(contours[i], false);  //  Find the area of contour
          //  if (a > largest_area) {
             //   largest_area = a;
            //    largest_contour_index = i;                //Store the index of largest contour
          //  }
           // mu[i] = moments( contours[i], false );
         mu[i] = moments( contours[i], false );
      }
        //计算轮廓的质心

        vector<Point2f> mc( contours.size() );

        for( int i = 0; i < contours.size(); i++ )
        {
            mc[i] = cv::Point2d( mu[i].m10/mu[i].m00 , mu[i].m01/mu[i].m00 );
        }
       //画轮廓及其质心并显示
        cv::Mat drawing =cv::Mat::zeros( detected_edges.size(), CV_8UC3 );
        cv::Mat drawing2 =cv::Mat::zeros( detected_edges.size(), CV_8UC3 );

           for( int i = 0; i< contours.size(); i++ )
            {
            Scalar color = Scalar( 255, 0, 0);
            drawContours( drawing, contours, i, color, 2, 8, hierarchy, 0, Point() );
            circle( drawing, mc[i], 5, Scalar( 0, 0, 255), -1, 8, 0 );
            rectangle(drawing, boundingRect(contours.at(i)), cvScalar(0,255,0));
            char tam[100];
            sprintf(tam, "(%0.0f,%0.0f)",mc[i].x,mc[i].y);
            putText(drawing, tam, Point(mc[i].x, mc[i].y), FONT_HERSHEY_SIMPLEX, 0.4, cvScalar(255,0,255),1);
}
        //Scalar color = Scalar( 255, 0, 0);

        //drawContours( drawing, contours, largest_contour_index, color, 2, 8, hierarchy, 0, Point() );


           dst = cv::Scalar::all(0);
           img.copyTo( dst, detected_edges);
           drawing.copyTo(img);
        //cv::imshow(OPENCV_WINDOW, src);
        //cv::imshow(OPENCV_WINDOW_1, dst);
        //cv::imshow( "Contours", drawing );
      // cv::imshow( "dstImg", dstImg );


    if(contours.size()>0)

    {        int j=0;
        for( j = 0; j< contours.size(); j++ )
         {
        double a = contourArea(contours[j], false);  //  Find the area of contour
                    if (a > largest_area) {
                        largest_area = a;
                       largest_contour_index = j;                //Store the index of largest contour
                  }

        }
    faceRectangle.center.x = mc[largest_contour_index].x ;
            faceRectangle.center.y = mc[largest_contour_index].y;
            faceRectangle.size.width = 0;
            faceRectangle.size.height =0;
            faceRectangle.angle = 0;
            return faceRectangle;

}

       // cv::waitKey(3);

  }

};


int main(int argc, char** argv)
{
  ros::init(argc, argv, "Edge_Detector");
  Edge_Detector ic;
  ros::spin();
  return 0;
}
