/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout_Qt;
    QAction *action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLabel *label_camera;
    QLabel *camera_after_right;
    QLabel *camera_before_right;
    QLabel *camera_before_2;
    QLabel *label_12;
    QWidget *tab_second;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLabel *second_after_right;
    QLabel *label_14;
    QLabel *second_before_left;
    QLabel *second_after_left;
    QLabel *second_before_right;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QPushButton *pushButton_point;
    QPushButton *pushButton_close2;
    QPushButton *quit_button;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_About;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLineEdit *line_edit_host;
    QLabel *label_3;
    QLineEdit *line_edit_topic;
    QLabel *label_6;
    QPushButton *pushButton_save2;
    QListView *view_logging_2;
    QPushButton *pushButton_run;
    QPushButton *pushButton_close;
    QPushButton *pushButton_save;
    QLabel *label_4;
    QLineEdit *lineEdit_hight;
    QListView *listView_hight;
    QLabel *label_5;
    QCheckBox *checkbox_remember_settings;
    QCheckBox *checkbox_use_environment;
    QPushButton *button_connect;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(860, 758);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/robot.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        action = new QAction(MainWindowDesign);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_manager->sizePolicy().hasHeightForWidth());
        tab_manager->setSizePolicy(sizePolicy);
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setStyleSheet(QStringLiteral(""));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_2 = new QVBoxLayout(tab_status);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea_2 = new QScrollArea(tab_status);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 684, 544));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_12 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(groupBox_12);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QStringLiteral("image: url(:/images/Camera.png);"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_camera = new QLabel(groupBox_12);
        label_camera->setObjectName(QStringLiteral("label_camera"));

        gridLayout_3->addWidget(label_camera, 2, 1, 1, 1);

        camera_after_right = new QLabel(groupBox_12);
        camera_after_right->setObjectName(QStringLiteral("camera_after_right"));

        gridLayout_3->addWidget(camera_after_right, 3, 1, 1, 1);

        camera_before_right = new QLabel(groupBox_12);
        camera_before_right->setObjectName(QStringLiteral("camera_before_right"));

        gridLayout_3->addWidget(camera_before_right, 3, 0, 1, 1);

        camera_before_2 = new QLabel(groupBox_12);
        camera_before_2->setObjectName(QStringLiteral("camera_before_2"));

        gridLayout_3->addWidget(camera_before_2, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox_12);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setStyleSheet(QStringLiteral("image: url(:/images/display.png);"));

        gridLayout_3->addWidget(label_12, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_12);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea_2);

        tab_manager->addTab(tab_status, QString());
        tab_second = new QWidget();
        tab_second->setObjectName(QStringLiteral("tab_second"));
        tab_second->setToolTipDuration(-1);
        gridLayout = new QGridLayout(tab_second);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(tab_second);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 684, 544));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(groupBox_13);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_13 = new QLabel(groupBox_13);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setStyleSheet(QStringLiteral("image: url(:/images/Camera.png);"));

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        second_after_right = new QLabel(groupBox_13);
        second_after_right->setObjectName(QStringLiteral("second_after_right"));

        gridLayout_2->addWidget(second_after_right, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_13);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setStyleSheet(QStringLiteral("image: url(:/images/display.png);"));

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);

        second_before_left = new QLabel(groupBox_13);
        second_before_left->setObjectName(QStringLiteral("second_before_left"));

        gridLayout_2->addWidget(second_before_left, 3, 0, 1, 1);

        second_after_left = new QLabel(groupBox_13);
        second_after_left->setObjectName(QStringLiteral("second_after_left"));

        gridLayout_2->addWidget(second_after_left, 1, 1, 1, 1);

        second_before_right = new QLabel(groupBox_13);
        second_before_right->setObjectName(QStringLiteral("second_before_right"));
        sizePolicy2.setHeightForWidth(second_before_right->sizePolicy().hasHeightForWidth());
        second_before_right->setSizePolicy(sizePolicy2);
        second_before_right->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(second_before_right, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_13);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        tab_manager->addTab(tab_second, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 661, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 0, 101, 51));
        label_8->setStyleSheet(QStringLiteral("image: url(:/images/package.png);"));
        tab_manager->addTab(tab, QString());

        verticalLayout_5->addWidget(tab_manager);


        verticalLayout_4->addLayout(verticalLayout_5);

        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QStringLiteral("pushButton_point"));

        verticalLayout_4->addWidget(pushButton_point);

        pushButton_close2 = new QPushButton(centralwidget);
        pushButton_close2->setObjectName(QStringLiteral("pushButton_close2"));

        verticalLayout_4->addWidget(pushButton_close2);

        quit_button = new QPushButton(centralwidget);
        quit_button->setObjectName(QStringLiteral("quit_button"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(quit_button);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_About = new QMenu(menu_File);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);
        dockWidget_2 = new QDockWidget(MainWindowDesign);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(dockWidgetContents_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 33, 261, 20));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);
        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));
        line_edit_master->setGeometry(QRect(12, 59, 261, 26));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 91, 261, 20));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);
        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));
        line_edit_host->setGeometry(QRect(12, 117, 261, 26));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 149, 261, 20));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);
        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);
        line_edit_topic->setGeometry(QRect(12, 175, 261, 26));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 101, 18));
        pushButton_save2 = new QPushButton(groupBox);
        pushButton_save2->setObjectName(QStringLiteral("pushButton_save2"));
        pushButton_save2->setGeometry(QRect(180, 340, 71, 26));
        view_logging_2 = new QListView(groupBox);
        view_logging_2->setObjectName(QStringLiteral("view_logging_2"));
        view_logging_2->setGeometry(QRect(10, 300, 161, 70));
        pushButton_run = new QPushButton(groupBox);
        pushButton_run->setObjectName(QStringLiteral("pushButton_run"));
        pushButton_run->setGeometry(QRect(10, 380, 80, 26));
        pushButton_close = new QPushButton(groupBox);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(10, 410, 80, 26));
        pushButton_save = new QPushButton(groupBox);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(170, 410, 80, 26));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 470, 111, 18));
        lineEdit_hight = new QLineEdit(groupBox);
        lineEdit_hight->setObjectName(QStringLiteral("lineEdit_hight"));
        lineEdit_hight->setGeometry(QRect(10, 490, 251, 26));
        listView_hight = new QListView(groupBox);
        listView_hight->setObjectName(QStringLiteral("listView_hight"));
        listView_hight->setGeometry(QRect(10, 540, 256, 70));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listView_hight->sizePolicy().hasHeightForWidth());
        listView_hight->setSizePolicy(sizePolicy4);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 520, 111, 18));
        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setGeometry(QRect(80, 210, 191, 24));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);
        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setGeometry(QRect(80, 230, 191, 24));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);
        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        button_connect->setGeometry(QRect(190, 260, 80, 26));
        sizePolicy3.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy3);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 380, 80, 26));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 260, 54, 18));
        label_9->setStyleSheet(QStringLiteral("image: url(:/images/online.png);"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 420, 54, 18));
        label_10->setStyleSheet(QStringLiteral("image: url(:/images/plus.png);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 390, 54, 18));
        label_11->setStyleSheet(QStringLiteral("image: url(:/images/PointCloud.png);"));

        verticalLayout_3->addWidget(groupBox);

        dockWidget_2->setWidget(dockWidgetContents_4);
        MainWindowDesign->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(menu_About->menuAction());
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_About->addAction(action);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "\346\277\200\345\205\211\346\211\253\346\217\217\346\210\220\345\203\217\347\263\273\347\273\237", 0));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0));
        action->setText(QApplication::translate("MainWindowDesign", "\345\212\237\350\203\275\350\257\264\346\230\216", 0));
        groupBox_12->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindowDesign", "                             \345\216\237\345\247\213\345\233\276\345\203\217", 0));
        label_camera->setText(QApplication::translate("MainWindowDesign", "camera_after_left", 0));
        camera_after_right->setText(QApplication::translate("MainWindowDesign", "camera_after_right", 0));
        camera_before_right->setText(QApplication::translate("MainWindowDesign", "camera_before_right", 0));
        camera_before_2->setText(QApplication::translate("MainWindowDesign", "camera_before_left", 0));
        label_12->setText(QApplication::translate("MainWindowDesign", "                              \345\244\204\347\220\206\345\220\216\345\233\276\345\203\217", 0));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "first_point", 0));
        groupBox_13->setTitle(QString());
        label_13->setText(QApplication::translate("MainWindowDesign", "                          \345\216\237\345\247\213\345\233\276\345\203\217", 0));
        second_after_right->setText(QApplication::translate("MainWindowDesign", "second_after_right", 0));
        label_14->setText(QApplication::translate("MainWindowDesign", "                              \345\244\204\347\220\206\345\220\216\345\233\276\345\203\217", 0));
        second_before_left->setText(QApplication::translate("MainWindowDesign", "second_before_left", 0));
        second_after_left->setText(QApplication::translate("MainWindowDesign", "second_after_left", 0));
        second_before_right->setText(QApplication::translate("MainWindowDesign", "second_before_right", 0));
        tab_manager->setTabText(tab_manager->indexOf(tab_second), QApplication::translate("MainWindowDesign", "second_point", 0));
        label_8->setText(QString());
        tab_manager->setTabText(tab_manager->indexOf(tab), QApplication::translate("MainWindowDesign", "rviz", 0));
        pushButton_point->setText(QApplication::translate("MainWindowDesign", "\345\274\200\345\247\213\350\257\206\345\210\253", 0));
        pushButton_close2->setText(QApplication::translate("MainWindowDesign", "\345\201\234\346\255\242\350\257\206\345\210\253", 0));
        quit_button->setText(QApplication::translate("MainWindowDesign", "\351\200\200\345\207\272", 0));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "\350\217\234\345\215\225", 0));
        menu_About->setTitle(QApplication::translate("MainWindowDesign", "&About", 0));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245\344\270\216\346\225\260\346\215\256\350\257\273\345\217\226", 0));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", 0));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://xu-As:11311/", 0));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", 0));
        line_edit_host->setText(QString());
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", 0));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", 0));
        label_6->setText(QApplication::translate("MainWindowDesign", "\344\270\255\345\277\203\347\202\271\345\201\217\347\247\273 \345\235\220\346\240\207", 0));
        pushButton_save2->setText(QApplication::translate("MainWindowDesign", "\346\240\207\345\256\232\347\202\271\344\272\221", 0));
        pushButton_run->setText(QApplication::translate("MainWindowDesign", "\345\220\257\345\212\250\351\233\267\350\276\276", 0));
        pushButton_close->setText(QApplication::translate("MainWindowDesign", "\345\205\263\351\227\255\351\233\267\350\276\276", 0));
        pushButton_save->setText(QApplication::translate("MainWindowDesign", "\344\277\235\345\255\230\347\202\271\344\272\221\345\233\276", 0));
        label_4->setText(QApplication::translate("MainWindowDesign", "\351\253\230\345\272\246\350\276\223\345\207\272", 0));
        label_5->setText(QApplication::translate("MainWindowDesign", "\351\253\230\345\272\246\350\257\273\345\217\226", 0));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "\350\256\260\344\275\217\347\224\250\346\210\267", 0));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "\344\275\277\347\224\250\347\216\257\345\242\203\345\217\230\351\207\217", 0));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", 0));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "\350\277\236\346\216\245", 0));
        pushButton_2->setText(QApplication::translate("MainWindowDesign", "\346\237\245\347\234\213rviz", 0));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
