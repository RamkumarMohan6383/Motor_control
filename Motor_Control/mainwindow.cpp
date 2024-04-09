#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#define steps 7
#define dir 0
#define en 3
#define hm_sen 4

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup () ;
    pinMode (en, OUTPUT) ;
    pinMode (dir, OUTPUT) ;
    pinMode (steps, OUTPUT) ;
    pinMode (hm_sen, INPUT) ;
    digitalWrite(en,HIGH);

    setWindowFlags(Qt::FramelessWindowHint);

    sqdb = QSqlDatabase::addDatabase("QSQLITE");
    sqdb.setDatabaseName("/home/pi/git/Motor_Control/Motor_control.db");
    if(!sqdb.open())
    {
        qDebug() << "Can't Connect to DB !";

    }
    else
    {
        qDebug() << "Connected Successfully to DB !";
    }
    QString Speed;
    QSqlQuery qy;
    qy.prepare("select Homing_speed from Main where sno=1");
    qy.exec();
    while(qy.next())
        Speed = qy.value(0).toString();

    ui->lineEdit_16->setText(Speed);

    timer = new QTimer(this);
    connect(timer ,SIGNAL(timeout()) , this ,SLOT(Start_loop())); // System Current Time Display
    timer->setTimerType(Qt::PreciseTimer);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Homing
    unsigned long homing_speed=0;
    QSqlQuery query;
    query.prepare("select Homing_speed from Main where sno=1");
    query.exec();
    while(query.next())
    {
        homing_speed=query.value(0).toUInt();
    }
    qDebug()<<"DOne"<<homing_speed;
    digitalWrite(en,LOW);
    digitalWrite(dir,HIGH);
    while(1)
    {
        if(digitalRead(hm_sen)==1)
        {
            break;
        }
        else
        {
            digitalWrite(steps, HIGH);
            QThread::usleep(homing_speed);
            digitalWrite(steps, LOW);
            QThread::usleep(homing_speed);
        }

    }
    digitalWrite(en,HIGH);
}

void MainWindow::on_pushButton_2_clicked()
{
    //Initialization
    unsigned long homing_speed=0;
    QSqlQuery query;
    query.prepare("select Homing_speed from Main where sno=1");
    query.exec();
    while(query.next())
    {
        homing_speed=query.value(0).toUInt();
    }
    qDebug()<<"spd : "<<homing_speed;
    on_pushButton_clicked();
    QThread::msleep(300);
    digitalWrite(en,LOW);
    digitalWrite(dir,LOW);
    for (int i=0;i<7500;i++)
    {
        digitalWrite(steps, HIGH);
        QThread::usleep(homing_speed);
        digitalWrite(steps, LOW);
        QThread::usleep(homing_speed);
    }
    digitalWrite(en,HIGH);
}

void MainWindow::on_pushButton_47_clicked()
{
    keyboard *key=new keyboard(this);
    key->setModal(true);
    //key->setPage(0);
    key->setData("Homing Speed",ui->lineEdit_16->text());
    key->exec();
    QString data = key->getData();
    ui->lineEdit_16->setText(data);

    QSqlQuery qy;
    qy.prepare("update Main set Homing_speed='"+data+"' where sno=1");
    qy.exec();
}

void MainWindow::Start_loop()
{
    on_pushButton_2_clicked();
    QThread::msleep(500);
}

void MainWindow::on_pushButton_3_clicked()
{
    timer->start(1000);
     qDebug()<<"Loop started...";
}

void MainWindow::on_pushButton_4_clicked()
{
    timer->stop();
    qDebug()<<"Loop stopped...";
}
