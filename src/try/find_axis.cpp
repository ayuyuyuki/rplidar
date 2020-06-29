#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

static const std::string OPENCV_WINDOW = "Raw Image window";
static const std::string OPENCV_WINDOW_1 = "Edge Detection";
using namespace cv;
using namespace std;
class Edge_Detector
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  image_transport::Publisher image_pub_;
public:
  Edge_Detector()
    : it_(nh_)
  {
    // Subscribe to input video feed and publish output video feed
    image_sub_ = it_.subscribe("/left/image_raw", 1,
      &Edge_Detector::imageCb, this);
    image_pub_ = it_.advertise("/edge_detector/raw_image", 1);
    cv::namedWindow(OPENCV_WINDOW);

  }

  ~Edge_Detector()
  {
    cv::destroyWindow(OPENCV_WINDOW);
  }

//回调函数
  void imageCb(const sensor_msgs::ImageConstPtr& msg)
  {

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
    if (cv_ptr->image.rows > 400 && cv_ptr->image.cols > 600){

    detect_edges(cv_ptr->image);
        image_pub_.publish(cv_ptr->toImageMsg());

    }
  }
  //OpenCV的边缘检测程序
  void detect_edges(cv::Mat img)
  {

    cv::Mat src, src_gray;
    cv::Mat dst, detected_edges;
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    int edgeThresh = 1;
    int lowThreshold = 200;
    int highThreshold =300;
    int kernel_size = 5;
    Mat1b mask1, mask2;
    img.copyTo(src);

    //cv::cvtColor( img, src_gray, CV_BGR2GRAY );
    cv::cvtColor( img, src_gray, cv::COLOR_BGR2HSV );
    cv::blur( src_gray, detected_edges, cv::Size(5,5) );
   // cv::equalizeHist( detected_edges, detected_edges ); //直方图均衡化，拉伸像素使其分布到0-255,增加对比度
    inRange(detected_edges, Scalar(0, 80, 50), Scalar(10, 255, 100), mask1);
    inRange(detected_edges, Scalar(160, 80, 50), Scalar(180, 255, 100), mask2);
    Mat1b dstImg = mask1 | mask2;
    cv::Canny( dstImg, detected_edges, lowThreshold, highThreshold, kernel_size );
    cv::findContours( detected_edges, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );
    vector<Moments> mu(contours.size() );
        for( int i = 0; i < contours.size(); i++ )
        {
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

    dst = cv::Scalar::all(0);
    img.copyTo( dst, detected_edges);
    drawing.copyTo(img);

        cv::imshow(OPENCV_WINDOW, src);
        cv::imshow(OPENCV_WINDOW_1, dst);
        cv::imshow( "Contours", drawing );
        cv::imshow( "dstImg", dstImg );

        cv::waitKey(3);

  }

};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "Edge_Detector");
  Edge_Detector ic;
  ros::spin();
  return 0;
}
