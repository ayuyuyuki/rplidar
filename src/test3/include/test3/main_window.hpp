/**
 * @file /include/mul_t/main_window.hpp
 *
 * @brief Qt based gui for mul_t.
 *
 * @date November 2010
 **/
#ifndef test3_MAIN_WINDOW_H
#define test3_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"
#include <QImage>
#include <QMutex>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool_manager.h>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool.h>
#include "rviz/image/ros_image_texture.h"
#include<rviz/tool_manager.h>
#include "std_msgs/Int8.h"
/*****************************************************************************
** Namespace
*****************************************************************************/

namespace test3 {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();

    void ReadSettings(); // Load up qt program settings at startup
    void WriteSettings(); // Save qt program settings when closing

    void closeEvent(QCloseEvent *event); // Overloaded function
    void showNoMasterMessage();

public Q_SLOTS:
    /******************************************
    ** Auto-connections (connectSlotsByName())
    *******************************************/
    void on_actionAbout_triggered();
    void on_button_connect_clicked(bool check );
    void on_checkbox_use_environment_stateChanged(int state);
    void on_pushButton_run_clicked();
    void on_pushButton_save_clicked();
    void on_pushButton_save2_clicked();
    void on_pushButton_close_clicked();
    void on_pushButton_point_clicked();
    void on_pushButton_close2_clicked();
    void on_close_uvc_clicked();

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // center_point
    void updateLoggingView_sub();//hight
    void updateLogstring();
    void updateLogcamera();
    void displayMat(const QImage& image);
   // void on_pushButton_clicked();
    void updateLogcamera2();//added
    void displayCamera2(const QImage& image);//added

    void updateLogcamera3();//added
    void displayCamera3(const QImage& image);//added

    void updateLogcamera4();//added
    void displayCamera4(const QImage& image);//added

    void updateLogcamera5();//added
    void displayCamera5(const QImage& image);//added

    void updateLogcamera6();//added
    void displayCamera6(const QImage& image);//added

    void updateLogcamera7();//added
    void displayCamera7(const QImage& image);//added

    void updateLogcamera8();//added
    void displayCamera8(const QImage& image);//added
  // void pub_cmd();//add
    void on_pushButton_2_clicked();
    void initrviz();
    void initrviz2();
private:
    Ui::MainWindowDesign ui;
  QNode qnode;
  QImage qimage_;
  mutable QMutex qimage_mutex_;
  QImage qimage_2;
  mutable QMutex qimage_mutex_2;

  QImage qimage_3;
  mutable QMutex qimage_mutex_3;

  QImage qimage_4;
  mutable QMutex qimage_mutex_4;

  QImage qimage_5;
  mutable QMutex qimage_mutex_5;
  QImage qimage_6;
  mutable QMutex qimage_mutex_6;

  QImage qimage_7;
  mutable QMutex qimage_mutex_7;

  QImage qimage_8;
  mutable QMutex qimage_mutex_8;
};

}  // namespace test3

#endif // mul_t_MAIN_WINDOW_H
