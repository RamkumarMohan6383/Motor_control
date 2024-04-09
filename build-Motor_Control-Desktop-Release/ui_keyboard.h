/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_keyboard
{
public:
    QFrame *frame_25;
    QPushButton *pushButton_109;
    QPushButton *pushButton_93;
    QPushButton *pushButton_96;
    QPushButton *pushButton_111;
    QPushButton *pushButton_101;
    QPushButton *pushButton_104;
    QPushButton *pushButton_106;
    QPushButton *pushButton_91;
    QPushButton *pushButton_89;
    QPushButton *pushButton_86;
    QPushButton *pushButton_107;
    QPushButton *pushButton_99;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *keyboard)
    {
        if (keyboard->objectName().isEmpty())
            keyboard->setObjectName(QStringLiteral("keyboard"));
        keyboard->resize(800, 480);
        frame_25 = new QFrame(keyboard);
        frame_25->setObjectName(QStringLiteral("frame_25"));
        frame_25->setGeometry(QRect(280, 30, 291, 421));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        pushButton_109 = new QPushButton(frame_25);
        pushButton_109->setObjectName(QStringLiteral("pushButton_109"));
        pushButton_109->setGeometry(QRect(20, 290, 71, 50));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton_109->setFont(font);
        pushButton_109->setStyleSheet(QStringLiteral(""));
        pushButton_93 = new QPushButton(frame_25);
        pushButton_93->setObjectName(QStringLiteral("pushButton_93"));
        pushButton_93->setGeometry(QRect(200, 360, 71, 50));
        pushButton_93->setFont(font);
        pushButton_93->setStyleSheet(QStringLiteral(""));
        pushButton_96 = new QPushButton(frame_25);
        pushButton_96->setObjectName(QStringLiteral("pushButton_96"));
        pushButton_96->setGeometry(QRect(200, 290, 71, 50));
        pushButton_96->setFont(font);
        pushButton_96->setStyleSheet(QStringLiteral(""));
        pushButton_111 = new QPushButton(frame_25);
        pushButton_111->setObjectName(QStringLiteral("pushButton_111"));
        pushButton_111->setGeometry(QRect(110, 360, 71, 50));
        pushButton_111->setFont(font);
        pushButton_111->setStyleSheet(QStringLiteral(""));
        pushButton_101 = new QPushButton(frame_25);
        pushButton_101->setObjectName(QStringLiteral("pushButton_101"));
        pushButton_101->setGeometry(QRect(200, 220, 71, 50));
        pushButton_101->setFont(font);
        pushButton_101->setStyleSheet(QStringLiteral(""));
        pushButton_104 = new QPushButton(frame_25);
        pushButton_104->setObjectName(QStringLiteral("pushButton_104"));
        pushButton_104->setGeometry(QRect(20, 150, 71, 50));
        pushButton_104->setFont(font);
        pushButton_104->setStyleSheet(QStringLiteral(""));
        pushButton_106 = new QPushButton(frame_25);
        pushButton_106->setObjectName(QStringLiteral("pushButton_106"));
        pushButton_106->setGeometry(QRect(110, 290, 71, 50));
        pushButton_106->setFont(font);
        pushButton_106->setStyleSheet(QStringLiteral(""));
        pushButton_91 = new QPushButton(frame_25);
        pushButton_91->setObjectName(QStringLiteral("pushButton_91"));
        pushButton_91->setGeometry(QRect(110, 220, 71, 50));
        pushButton_91->setFont(font);
        pushButton_91->setStyleSheet(QStringLiteral(""));
        pushButton_89 = new QPushButton(frame_25);
        pushButton_89->setObjectName(QStringLiteral("pushButton_89"));
        pushButton_89->setGeometry(QRect(20, 360, 71, 50));
        pushButton_89->setFont(font);
        pushButton_89->setStyleSheet(QStringLiteral(""));
        pushButton_86 = new QPushButton(frame_25);
        pushButton_86->setObjectName(QStringLiteral("pushButton_86"));
        pushButton_86->setGeometry(QRect(20, 220, 71, 50));
        pushButton_86->setFont(font);
        pushButton_86->setStyleSheet(QStringLiteral(""));
        pushButton_107 = new QPushButton(frame_25);
        pushButton_107->setObjectName(QStringLiteral("pushButton_107"));
        pushButton_107->setGeometry(QRect(200, 150, 71, 50));
        pushButton_107->setFont(font);
        pushButton_107->setStyleSheet(QStringLiteral(""));
        pushButton_99 = new QPushButton(frame_25);
        pushButton_99->setObjectName(QStringLiteral("pushButton_99"));
        pushButton_99->setGeometry(QRect(110, 150, 71, 50));
        pushButton_99->setFont(font);
        pushButton_99->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(frame_25);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 171, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Liberation Sans"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame_25);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 181, 51));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(false);
        pushButton = new QPushButton(frame_25);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 70, 61, 51));
        pushButton->setStyleSheet(QLatin1String("width:50px;\n"
"height:50px;\n"
"background-color:none;\n"
"border:none;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/delline.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        retranslateUi(keyboard);

        QMetaObject::connectSlotsByName(keyboard);
    } // setupUi

    void retranslateUi(QDialog *keyboard)
    {
        keyboard->setWindowTitle(QApplication::translate("keyboard", "Dialog", nullptr));
        pushButton_109->setText(QApplication::translate("keyboard", "7", nullptr));
        pushButton_93->setText(QApplication::translate("keyboard", "\342\206\265", nullptr));
        pushButton_96->setText(QApplication::translate("keyboard", "9", nullptr));
        pushButton_111->setText(QApplication::translate("keyboard", "0", nullptr));
        pushButton_101->setText(QApplication::translate("keyboard", "6", nullptr));
        pushButton_104->setText(QApplication::translate("keyboard", "1", nullptr));
        pushButton_106->setText(QApplication::translate("keyboard", "8", nullptr));
        pushButton_91->setText(QApplication::translate("keyboard", "5", nullptr));
        pushButton_89->setText(QApplication::translate("keyboard", "\342\214\253 ", nullptr));
        pushButton_86->setText(QApplication::translate("keyboard", "4", nullptr));
        pushButton_107->setText(QApplication::translate("keyboard", "3", nullptr));
        pushButton_99->setText(QApplication::translate("keyboard", "2", nullptr));
        label_4->setText(QApplication::translate("keyboard", "Homing Speed", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class keyboard: public Ui_keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
