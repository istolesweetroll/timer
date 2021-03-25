/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *centralwidget;
    QFrame *frame1;
    QLabel *label_6;
    QDial *dial;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QDial *dial_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_7;
    QLabel *label_15;
    QPushButton *button;
    QToolButton *toolButton;
    QFrame *frame2;
    QProgressBar *progressBar;
    QLabel *display;
    QPushButton *pushButton;

    void setupUi(QMainWindow *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QString::fromUtf8("timer"));
        timer->setWindowModality(Qt::NonModal);
        timer->resize(247, 230);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(212, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(191, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 0, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        timer->setPalette(palette);
        timer->setMouseTracking(false);
        timer->setTabletTracking(false);
        timer->setLayoutDirection(Qt::LeftToRight);
        timer->setAnimated(true);
        timer->setDocumentMode(false);
        timer->setTabShape(QTabWidget::Rounded);
        timer->setDockNestingEnabled(false);
        timer->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(timer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        centralwidget->setPalette(palette1);
        frame1 = new QFrame(centralwidget);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(0, 0, 251, 241));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame1->setPalette(palette2);
        frame1->setAutoFillBackground(true);
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(frame1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 10, 21, 31));
        dial = new QDial(frame1);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(50, 40, 91, 81));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(0, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(127, 127, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(63, 63, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(0, 0, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(0, 0, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        dial->setPalette(palette3);
        dial->setMinimum(0);
        dial->setMaximum(120);
        dial->setOrientation(Qt::Horizontal);
        dial->setInvertedAppearance(false);
        dial->setWrapping(true);
        dial->setNotchesVisible(true);
        label_4 = new QLabel(frame1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 90, 16, 20));
        label_5 = new QLabel(frame1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 40, 16, 31));
        label = new QLabel(frame1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 120, 41, 20));
        label_3 = new QLabel(frame1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(131, 40, 31, 31));
        label_2 = new QLabel(frame1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 90, 41, 20));
        dial_3 = new QDial(frame1);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setGeometry(QRect(140, 110, 51, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(0, 170, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush14);
        QBrush brush15(QColor(0, 255, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush15);
        QBrush brush16(QColor(0, 212, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush16);
        QBrush brush17(QColor(0, 85, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush17);
        QBrush brush18(QColor(0, 113, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush19(QColor(127, 212, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        dial_3->setPalette(palette4);
        dial_3->setMinimum(0);
        dial_3->setMaximum(59);
        dial_3->setOrientation(Qt::Horizontal);
        dial_3->setInvertedAppearance(false);
        dial_3->setWrapping(true);
        dial_3->setNotchTarget(15.000000000000000);
        dial_3->setNotchesVisible(true);
        label_16 = new QLabel(frame1);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(151, 160, 20, 20));
        QFont font;
        font.setPointSize(6);
        label_16->setFont(font);
        label_17 = new QLabel(frame1);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(160, 90, 20, 20));
        label_17->setFont(font);
        label_18 = new QLabel(frame1);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(190, 120, 21, 31));
        label_18->setFont(font);
        label_19 = new QLabel(frame1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(130, 120, 16, 31));
        label_19->setFont(font);
        label_7 = new QLabel(frame1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(false);
        label_7->setGeometry(QRect(80, 70, 31, 20));
        QFont font1;
        font1.setPointSize(10);
        label_7->setFont(font1);
        label_7->setToolTipDuration(0);
        label_7->setTextFormat(Qt::RichText);
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(frame1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setEnabled(false);
        label_15->setGeometry(QRect(150, 120, 31, 20));
        label_15->setFont(font);
        label_15->setToolTipDuration(0);
        label_15->setTextFormat(Qt::RichText);
        label_15->setScaledContents(true);
        label_15->setAlignment(Qt::AlignCenter);
        button = new QPushButton(frame1);
        button->setObjectName(QString::fromUtf8("button"));
        button->setEnabled(false);
        button->setGeometry(QRect(70, 160, 51, 22));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy);
        QPalette palette5;
        QBrush brush20(QColor(255, 85, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush20);
        QBrush brush21(QColor(170, 85, 255, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush21);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush21);
        button->setPalette(palette5);
        button->setFocusPolicy(Qt::NoFocus);
        button->setCheckable(false);
        button->setAutoDefault(false);
        button->setFlat(false);
        toolButton = new QToolButton(frame1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(220, 10, 24, 21));
        frame2 = new QFrame(frame1);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(0, 0, 251, 241));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame2->setPalette(palette6);
        frame2->setLayoutDirection(Qt::LeftToRight);
        frame2->setAutoFillBackground(true);
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Plain);
        progressBar = new QProgressBar(frame2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(7, 120, 231, 23));
        QPalette palette7;
        QBrush brush22(QColor(255, 85, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush22);
        QBrush brush23(QColor(170, 0, 0, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Link, brush23);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush22);
        palette7.setBrush(QPalette::Inactive, QPalette::Link, brush23);
        QBrush brush24(QColor(0, 120, 215, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Link, brush23);
        progressBar->setPalette(palette7);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        display = new QLabel(frame2);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(0, 40, 251, 71));
        QFont font2;
        font2.setPointSize(30);
        display->setFont(font2);
        display->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 150, 80, 22));
        label_6->raise();
        label_4->raise();
        label_5->raise();
        label->raise();
        label_3->raise();
        label_2->raise();
        dial_3->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        dial->raise();
        label_7->raise();
        label_15->raise();
        button->raise();
        toolButton->raise();
        frame2->raise();
        timer->setCentralWidget(centralwidget);

        retranslateUi(timer);

        button->setDefault(false);


        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QMainWindow *timer)
    {
        timer->setWindowTitle(QCoreApplication::translate("timer", "timer", nullptr));
        label_6->setText(QCoreApplication::translate("timer", " 60", nullptr));
        label_4->setText(QCoreApplication::translate("timer", "20", nullptr));
        label_5->setText(QCoreApplication::translate("timer", "40", nullptr));
        label->setText(QCoreApplication::translate("timer", "0", nullptr));
        label_3->setText(QCoreApplication::translate("timer", " 80", nullptr));
        label_2->setText(QCoreApplication::translate("timer", " 100", nullptr));
        label_16->setText(QCoreApplication::translate("timer", "     0", nullptr));
        label_17->setText(QCoreApplication::translate("timer", "30", nullptr));
        label_18->setText(QCoreApplication::translate("timer", "  45", nullptr));
        label_19->setText(QCoreApplication::translate("timer", "15", nullptr));
        label_7->setText(QCoreApplication::translate("timer", "min", nullptr));
        label_15->setText(QCoreApplication::translate("timer", "sek", nullptr));
        button->setText(QCoreApplication::translate("timer", "\342\236\224", nullptr));
        toolButton->setText(QCoreApplication::translate("timer", "...", nullptr));
        display->setText(QCoreApplication::translate("timer", "0 : 0 : 0", nullptr));
        pushButton->setText(QCoreApplication::translate("timer", "\342\226\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
