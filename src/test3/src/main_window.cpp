
/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/test3/main_window.hpp"
#include "../include/test3/myviz.h"
#include <QScrollArea>
#include <sys/wait.h>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace test3 {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
    setWindowIcon(QIcon(":/images/robot.png"));
	ui.tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

	/*********************
	** Logging
	**********************/
    QObject::connect(&qnode,SIGNAL(loggingCamera()),this,SLOT(updateLogcamera()));
    ui.view_logging_2->setModel(qnode.loggingModel());
    ui.listView_hight->setModel(qnode.loggingModel_sub());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));
    QObject::connect(&qnode,SIGNAL(loggingCamera2()),this,SLOT(updateLogcamera2()));
    QObject::connect(&qnode,SIGNAL(loggingCamera3()),this,SLOT(updateLogcamera3()));
    QObject::connect(&qnode,SIGNAL(loggingCamera4()),this,SLOT(updateLogcamera4()));
    QObject::connect(&qnode,SIGNAL(loggingCamera5()),this,SLOT(updateLogcamera5()));
    QObject::connect(&qnode,SIGNAL(loggingCamera6()),this,SLOT(updateLogcamera6()));
    QObject::connect(&qnode,SIGNAL(loggingCamera7()),this,SLOT(updateLogcamera7()));
    QObject::connect(&qnode,SIGNAL(loggingCamera8()),this,SLOT(updateLogcamera8()));
    //QObject::connect(ui.lineEdit_hight,SIGNAL(returnPressed()),this,SLOT(pub_cmd())); //add
    /*********************
    ** Auto Start
    **********************/
    if ( ui.checkbox_remember_settings->isChecked() ) {
        on_button_connect_clicked(true);
    }
}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */

void MainWindow::on_button_connect_clicked(bool check ) {
	if ( ui.checkbox_use_environment->isChecked() ) {
		if ( !qnode.init() ) {
			showNoMasterMessage();
		} else {
			ui.button_connect->setEnabled(false);
		}
	} else {
		if ( ! qnode.init(ui.line_edit_master->text().toStdString(),
				   ui.line_edit_host->text().toStdString()) ) {
			showNoMasterMessage();
		} else {
			ui.button_connect->setEnabled(false);
			ui.line_edit_master->setReadOnly(true);
			ui.line_edit_host->setReadOnly(true);
			ui.line_edit_topic->setReadOnly(true);
		}
	}
}


void MainWindow::on_checkbox_use_environment_stateChanged(int state) {
	bool enabled;
	if ( state == 0 ) {
		enabled = true;
	} else {
		enabled = false;
	}
	ui.line_edit_master->setEnabled(enabled);
	ui.line_edit_host->setEnabled(enabled);
	//ui.line_edit_topic->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
        ui.view_logging_2->scrollToBottom();
}


void MainWindow::updateLoggingView_sub()
{
    ui.listView_hight->scrollToBottom();
}
/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "test3");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    ui.line_edit_master->setText(master_url);
    ui.line_edit_host->setText(host_url);
    //ui.line_edit_topic->setText(topic_name);
    bool remember = settings.value("remember_settings", false).toBool();
    ui.checkbox_remember_settings->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui.checkbox_use_environment->setChecked(checked);
    if ( checked ) {
    	ui.line_edit_master->setEnabled(false);
    	ui.line_edit_host->setEnabled(false);
    	//ui.line_edit_topic->setEnabled(false);
    }
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "test3");
    settings.setValue("master_url",ui.line_edit_master->text());
    settings.setValue("host_url",ui.line_edit_host->text());
    //settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("use_environment_variables",QVariant(ui.checkbox_use_environment->isChecked()));
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui.checkbox_remember_settings->isChecked()));

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}
/*void MainWindow::on_pushButton_clicked()
{
    MyViz* myviz = new MyViz();
    myviz->show();
    myviz->resize(600,400);
    myviz->setWindowTitle("Mapping Show");
}*/
void MainWindow::on_pushButton_run_clicked()
{
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch rplidar_ros rplidar.launch  limited:=true'&");
    //system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun service_example server_node  limited:=true'&");
sleep(3);
system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun calibration  calibration  limited:=true'&");
sleep(3);
system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch scan_pcl scan_pcl.launch limited:=true'&");

}
void MainWindow::on_pushButton_save2_clicked(){


    initrviz2();

}
void MainWindow::on_pushButton_save_clicked()
{
  //system("gnome-terminal -x bash -c '　　rosbag record -O out /point_cloud3;rosrun pcl_ros bag_to_pcd out.bag /point_cloud3 pcd limited:=true'&");


}
void MainWindow::on_pushButton_point_clicked()
{  system("gnome-terminal -x bash -c 'source ~/dogkin_ws/devel/setup.bash;roslaunch uvc_camera stereo_node.launch limited:=true'&");
    sleep(3);


  system("gnome-terminal -x bash -c 'source ~/dogkin_ws/devel/setup.bash;roslaunch double point_find.launch limited:=true'&");
sleep(3);
        system("gnome-terminal -x bash -c 'source ~/dogkin_ws/devel/setup.bash;roslaunch stereo_vision find_target.launch limited:=true'&");

}


pid_t getProcessPidByName(const char *proc_name)
{
     FILE *fp;
     char buf[100];
     char cmd[200] = {'\0'};
     pid_t pid = -1;
     sprintf(cmd, "pidof %s", proc_name);
     if((fp = popen(cmd, "r")) != NULL)
     {
         if(fgets(buf, 255, fp) != NULL)
         {
             pid = atoi(buf);
         }
     }
     printf("pid = %d \n", pid);
     pclose(fp);
     return pid;
}
void MainWindow::on_pushButton_close_clicked()
{
    ROS_INFO("end");
    int killa;

    //killa=getProcessPidByName("/home/pi/catkin_ws/devel/lib/scan_pcl/scan_pcl");
            kill(killa,SIGTERM);

            ROS_INFO("  end");
}
void MainWindow::on_close_uvc_clicked()
{

  std_msgs::Int8 close;

close.data=0;
      qnode.sent_cmd_close(close);


}
void MainWindow::on_pushButton_close2_clicked()
{
    ROS_INFO("camera_end");
    int killa;
   // killa=getProcessPidByName("/home/xu/dogkin_ws/devel/lib/uvc_camera/uvc_stereo_node");
      //      kill(killa,SIGTERM);
//sleep(3);
    killa=getProcessPidByName("/home/xu/dogkin_ws/devel/lib/double/find_target_double");
            kill(killa,SIGTERM);
sleep(3);
//killa=getProcessPidByName("/home/xu/dogkin_ws/devel/lib/stereo_vision/cal_target_3Dposition");
      //  kill(killa,SIGTERM);
         //   ROS_INFO(" camera end");
}
void MainWindow::updateLogstring(){
  //ui.lineEdit_listener->setText(qnode.str);
}
//update camera topic messages
void MainWindow::updateLogcamera()
{
  displayMat(qnode.image);
  //ui.label_camera;
  //ui.graphicsView->setForegroundBrush();
}
void MainWindow::displayMat(const QImage &image)
{

  /*cv::Mat rgb;
      QImage img;
      qimage_ = image.copy();
      if(image.channels()==3)
      {
          //cvt Mat BGR 2 QImage RGB
          cv::cvtColor(image,rgb,CV_BGR2RGB);
          img =QImage((const unsigned char*)(rgb.data),
                      rgb.cols,rgb.rows,
                      rgb.cols*rgb.channels(),
                      QImage::Format_RGB888);
      }
      else
      {
          img =QImage((const unsigned char*)(image.data),
                      image.cols,image.rows,
                      image.cols*image.channels(),
                      QImage::Format_RGB888);
      }*/
      //ROS_INFO("I'm setting picture in mainwindow!");
      qimage_mutex_.lock();
      qimage_ = image.copy();
      ui.label_camera->setPixmap(QPixmap::fromImage(qimage_));
      ui.label_camera->resize(ui.label_camera->pixmap()->size());
      qimage_mutex_.unlock();
      /*int c=cv::waitKey(30);//每一帧间隔30ms
              if(c>=0)//任意键暂停
              {
                  cv::waitKey(0);
              }*/
}
void MainWindow::displayCamera2(const QImage &image)
{
    qimage_mutex_2.lock();
    qimage_2 = image.copy();
    ui.camera_before_2->setPixmap(QPixmap::fromImage(qimage_2));
    ui.camera_before_2->resize(ui.camera_before_2->pixmap()->size());
    qimage_mutex_2.unlock();
}
void MainWindow::updateLogcamera2()
{
  displayCamera2(qnode.image2);
}
void MainWindow::displayCamera3(const QImage &image)
{
    qimage_mutex_3.lock();
    qimage_3 = image.copy();
    ui.camera_after_right->setPixmap(QPixmap::fromImage(qimage_3));
    ui.camera_after_right->resize(ui.camera_after_right->pixmap()->size());
    qimage_mutex_3.unlock();
}
void MainWindow::updateLogcamera3()
{
  displayCamera3(qnode.image3);
}
void MainWindow::displayCamera4(const QImage &image)
{
    qimage_mutex_4.lock();
    qimage_4 = image.copy();
    ui.camera_before_right->setPixmap(QPixmap::fromImage(qimage_4));
    ui.camera_before_right->resize(ui.camera_before_right->pixmap()->size());
    qimage_mutex_4.unlock();
}
void MainWindow::updateLogcamera4()
{
  displayCamera4(qnode.image4);
}
void MainWindow::displayCamera5(const QImage &image)
{
    qimage_mutex_5.lock();
    qimage_5 = image.copy();
    ui.second_after_left->setPixmap(QPixmap::fromImage(qimage_5));
    ui.second_after_left->resize(ui.second_after_left->pixmap()->size());
    qimage_mutex_5.unlock();
}
void MainWindow::updateLogcamera5()
{
  displayCamera5(qnode.image5);
}

void MainWindow::displayCamera6(const QImage &image)
{
    qimage_mutex_6.lock();
    qimage_6 = image.copy();
    ui.second_before_left->setPixmap(QPixmap::fromImage(qimage_6));
    ui.second_before_left->resize(ui.second_before_left->pixmap()->size());
    qimage_mutex_6.unlock();
}
void MainWindow::updateLogcamera6()
{
  displayCamera6(qnode.image6);
}
void MainWindow::displayCamera7(const QImage &image)
{
    qimage_mutex_7.lock();
    qimage_7 = image.copy();
    ui.second_after_right->setPixmap(QPixmap::fromImage(qimage_7));
    ui.second_after_right->resize(ui.second_after_right->pixmap()->size());
    qimage_mutex_7.unlock();
}
void MainWindow::updateLogcamera7()
{
  displayCamera7(qnode.image7);
}

void MainWindow::displayCamera8(const QImage &image)
{
    qimage_mutex_8.lock();
    qimage_8 = image.copy();
    ui.second_before_right->setPixmap(QPixmap::fromImage(qimage_8));
    ui.second_before_right->resize(ui.second_before_right->pixmap()->size());
    qimage_mutex_8.unlock();
}
void MainWindow::updateLogcamera8()
{
  displayCamera8(qnode.image8);
}


/**void MainWindow::pub_cmd()
{
    std_msgs::Float64 high_out;
QString mstring = ui.lineEdit_hight->text();
high_out.data=mstring.toFloat();
        qnode.sent_cmd(high_out);
}
**/


void MainWindow::initrviz(){
rviz::VisualizationManager* manager_;
  rviz::RenderPanel *render_panel_=new rviz::RenderPanel;
      //    //设置鼠标形状
          render_panel_->setCursor(Qt::PointingHandCursor);
       //render_panel_->initialize(manager_->getSceneManager(),manager_);
          //向layout添加widget
          ui.verticalLayout->addWidget(render_panel_);
        //  render_panel_->initialize(manager_->getSceneManager(),manager_);
          //初始化rviz控制对象
         manager_=new rviz::VisualizationManager(render_panel_);
         render_panel_->initialize( manager_->getSceneManager(), manager_ );

         manager_->initialize();
         manager_->startUpdate();

         manager_->removeAllDisplays();
         manager_->setFixedFrame("laser");
         manager_->setProperty("Background Color",QColor(48,48,48));
         manager_->setProperty("Frame Rate",1000);

          rviz::Display* grid_ = manager_->createDisplay( "rviz/Grid", "adjustable grid", true );
          grid_->subProp( "Line Style" )->setValue( "" );
          grid_->subProp( "Color" )->setValue(QColor(160,160,164));
          grid_->subProp("Alpha")->setValue(0.5);
          grid_->subProp( "Reference Frame" )->setValue("laser");
          grid_->subProp("Plane Cell Count")->setValue(10);

          rviz::Display* laser_=manager_->createDisplay("rviz/PointCloud2","point_cloud",true);
          ROS_ASSERT(laser_);
          laser_->subProp("Topic")->setValue("point_cloud");
          laser_->setEnabled(true);
          rviz::Display* map_=manager_->createDisplay("rviz/Map","QMap",true);
          ROS_ASSERT(map_);
          manager_->startUpdate();
}
void MainWindow::on_pushButton_2_clicked(){

   initrviz();

}
void MainWindow::initrviz2(){
rviz::VisualizationManager* manager_;
  rviz::RenderPanel *render_panel_=new rviz::RenderPanel;
      //    //设置鼠标形状
          render_panel_->setCursor(Qt::PointingHandCursor);

          //向layout添加widget
          ui.verticalLayout->addWidget(render_panel_);
        //  render_panel_->initialize(manager_->getSceneManager(),manager_);

          //初始化rviz控制对象
         manager_=new rviz::VisualizationManager(render_panel_);
         render_panel_->initialize( manager_->getSceneManager(), manager_ );

         manager_->initialize();
         manager_->startUpdate();

         manager_->removeAllDisplays();
         manager_->setFixedFrame("laser");
         manager_->setProperty("Background Color",QColor(48,48,48));
         manager_->setProperty("Frame Rate",1000);

          rviz::Display* grid_ = manager_->createDisplay( "rviz/Grid", "adjustable grid", true );
          grid_->subProp( "Line Style" )->setValue( "" );
          grid_->subProp( "Color" )->setValue(QColor(160,160,164));
          grid_->subProp("Alpha")->setValue(0.5);
          grid_->subProp( "Reference Frame" )->setValue("laser");
          grid_->subProp("Plane Cell Count")->setValue(10);

          rviz::Display* laser_=manager_->createDisplay("rviz/PointCloud2","point_cloud",true);
          ROS_ASSERT(laser_);
          laser_->subProp("Topic")->setValue("pcbb");
          laser_->setEnabled(true);
          rviz::Display* map_=manager_->createDisplay("rviz/Map","QMap",true);
          ROS_ASSERT(map_);
          manager_->startUpdate();
}
}  // namespace test3

