/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_47;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 50, 591, 381));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 160, 231, 61));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 160, 231, 61));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 280, 231, 61));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 280, 231, 61));
        pushButton_4->setFont(font);
        lineEdit_16 = new QLineEdit(frame);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(330, 70, 181, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Liberation Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_16->setFont(font1);
        lineEdit_16->setAlignment(Qt::AlignCenter);
        pushButton_47 = new QPushButton(frame);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        pushButton_47->setGeometry(QRect(330, 70, 181, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Liberation Sans"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton_47->setFont(font2);
        pushButton_47->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 70, 171, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Liberation Sans"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label->setFont(font3);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Homing", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Initialize", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Loop Start", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Loop End", nullptr));
        lineEdit_16->setStyleSheet(QApplication::translate("MainWindow", "background-color: rgb(255, 255, 255);", nullptr));
        pushButton_47->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Homing Speed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
