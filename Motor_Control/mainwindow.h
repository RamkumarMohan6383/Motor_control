#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <wiringPi.h>
#include <QThread>
#include <mcp3004.h>
#include <wiringPiSPI.h>
#include <softPwm.h>
#include <Iir.h>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include "keyboard.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSqlDatabase sqdb;

    void connclose()
    {
        sqdb.close();

    }
    bool connOpen()
    {

        sqdb = QSqlDatabase :: addDatabase("QSQLITE");
        sqdb.setDatabaseName("/home/pi/git/Motor_Control/Motor_control.db");
        if(!sqdb.open())
        {
            qDebug()<<("Failed topen the Database");
            return false;
        }
        else
        {
            qDebug()<<("Connected...");
            return true;
        }
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_3_clicked();

    void Start_loop();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
       QTimer * timer;
};

#endif // MAINWINDOW_H
