/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QFrame *frame1;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *dzwiekComboBox_2;
    QComboBox *motywComboBox_2;
    QLabel *label_13;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(201, 190);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(127, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(57, 0, 170, 255));
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
        settings->setPalette(palette);
        frame1 = new QFrame(settings);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(0, 0, 201, 191));
        frame1->setAutoFillBackground(true);
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frame1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 50, 51, 20));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        label_11->setFont(font);
        label_12 = new QLabel(frame1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 80, 51, 20));
        label_12->setFont(font);
        dzwiekComboBox_2 = new QComboBox(frame1);
        dzwiekComboBox_2->addItem(QString());
        dzwiekComboBox_2->addItem(QString());
        dzwiekComboBox_2->addItem(QString());
        dzwiekComboBox_2->setObjectName(QString::fromUtf8("dzwiekComboBox_2"));
        dzwiekComboBox_2->setGeometry(QRect(60, 50, 111, 22));
        dzwiekComboBox_2->setFont(font);
        motywComboBox_2 = new QComboBox(frame1);
        motywComboBox_2->addItem(QString());
        motywComboBox_2->addItem(QString());
        motywComboBox_2->addItem(QString());
        motywComboBox_2->setObjectName(QString::fromUtf8("motywComboBox_2"));
        motywComboBox_2->setGeometry(QRect(60, 80, 111, 22));
        motywComboBox_2->setFont(font);
        label_13 = new QLabel(frame1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 10, 111, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_13->setFont(font1);
        pushButton_4 = new QPushButton(frame1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 130, 71, 22));
        pushButton_5 = new QPushButton(frame1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(99, 130, 71, 22));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("settings", "D\305\272wi\304\231k:", nullptr));
        label_12->setText(QCoreApplication::translate("settings", "Motyw:", nullptr));
        dzwiekComboBox_2->setItemText(0, QCoreApplication::translate("settings", "Slow Morning", nullptr));
        dzwiekComboBox_2->setItemText(1, QCoreApplication::translate("settings", "Daybreak", nullptr));
        dzwiekComboBox_2->setItemText(2, QCoreApplication::translate("settings", "Easy Riser", nullptr));

        motywComboBox_2->setItemText(0, QCoreApplication::translate("settings", "Domy\305\233lny", nullptr));
        motywComboBox_2->setItemText(1, QCoreApplication::translate("settings", "Ciemny", nullptr));
        motywComboBox_2->setItemText(2, QCoreApplication::translate("settings", "Wysoki kontrast", nullptr));

        label_13->setText(QCoreApplication::translate("settings", "USTAWIENIA", nullptr));
        pushButton_4->setText(QCoreApplication::translate("settings", "Zapisz", nullptr));
        pushButton_5->setText(QCoreApplication::translate("settings", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
