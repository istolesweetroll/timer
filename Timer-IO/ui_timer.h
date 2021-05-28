/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *centralwidget;
    QFrame *frame1;
    QPushButton *button;
    QToolButton *toolButton;
    QTimeEdit *timeEdit;
    QLabel *label;
    QFrame *frame2;
    QProgressBar *progressBar;
    QLabel *display;
    QPushButton *pauseplay;
    QPushButton *stop;
    QPushButton *reset;

    void setupUi(QMainWindow *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QString::fromUtf8("timer"));
        timer->setWindowModality(Qt::NonModal);
        timer->resize(230, 232);
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
        QBrush brush9(QColor(252, 175, 62, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 227, 186, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(253, 201, 124, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(126, 87, 31, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(168, 117, 41, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(253, 215, 158, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame1->setPalette(palette2);
        frame1->setAutoFillBackground(true);
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Sunken);
        button = new QPushButton(frame1);
        button->setObjectName(QString::fromUtf8("button"));
        button->setEnabled(true);
        button->setGeometry(QRect(90, 160, 51, 22));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy);
        QPalette palette3;
        QBrush brush15(QColor(255, 85, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush15);
        QBrush brush16(QColor(170, 85, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
        button->setPalette(palette3);
        button->setFocusPolicy(Qt::NoFocus);
        button->setCheckable(false);
        button->setAutoDefault(false);
        button->setFlat(false);
        toolButton = new QToolButton(frame1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(200, 10, 24, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(12);
        font.setBold(true);
        toolButton->setFont(font);
        timeEdit = new QTimeEdit(frame1);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(50, 100, 131, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(15);
        font1.setBold(true);
        timeEdit->setFont(font1);
        timeEdit->setMaximumTime(QTime(23, 59, 59));
        label = new QLabel(frame1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 231, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);
        frame2 = new QFrame(frame1);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(0, 0, 251, 241));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame2->setPalette(palette4);
        frame2->setLayoutDirection(Qt::LeftToRight);
        frame2->setAutoFillBackground(true);
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Plain);
        progressBar = new QProgressBar(frame2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 110, 211, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(173, 127, 168, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush17);
        QBrush brush18(QColor(255, 192, 248, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush18);
        QBrush brush19(QColor(214, 159, 208, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(86, 63, 84, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(115, 85, 112, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush22(QColor(245, 121, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush22);
        QBrush brush23(QColor(214, 191, 211, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush22);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush24(QColor(145, 145, 145, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush24);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        progressBar->setPalette(palette5);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        display = new QLabel(frame2);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(-20, 40, 271, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font3.setPointSize(30);
        font3.setBold(true);
        display->setFont(font3);
        display->setAlignment(Qt::AlignCenter);
        pauseplay = new QPushButton(frame2);
        pauseplay->setObjectName(QString::fromUtf8("pauseplay"));
        pauseplay->setGeometry(QRect(60, 140, 41, 41));
        QFont font4;
        font4.setPointSize(24);
        pauseplay->setFont(font4);
        pauseplay->setFlat(true);
        stop = new QPushButton(frame2);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(120, 140, 41, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stop->sizePolicy().hasHeightForWidth());
        stop->setSizePolicy(sizePolicy1);
        stop->setFont(font4);
        stop->setAutoFillBackground(false);
        stop->setFlat(true);
        reset = new QPushButton(frame2);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setEnabled(false);
        reset->setGeometry(QRect(120, 140, 41, 41));
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setFont(font4);
        reset->setAutoFillBackground(false);
        reset->setFlat(true);
        reset->raise();
        stop->raise();
        progressBar->raise();
        display->raise();
        pauseplay->raise();
        timer->setCentralWidget(centralwidget);

        retranslateUi(timer);

        button->setDefault(false);


        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QMainWindow *timer)
    {
        timer->setWindowTitle(QApplication::translate("timer", "timer", nullptr));
        button->setText(QApplication::translate("timer", "\342\236\224", nullptr));
        toolButton->setText(QApplication::translate("timer", "...", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("timer", "mm 'm':ss 's'", nullptr));
        label->setText(QApplication::translate("timer", "Ile czasu odmierzy\304\207?", nullptr));
        display->setText(QApplication::translate("timer", "0 : 0 : 0", nullptr));
        pauseplay->setText(QApplication::translate("timer", "\342\217\257\357\270\217", nullptr));
        stop->setText(QApplication::translate("timer", "\342\217\271\357\270\217", nullptr));
        reset->setText(QApplication::translate("timer", "\360\237\224\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
