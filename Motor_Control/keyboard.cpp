#include "keyboard.h"
#include "ui_keyboard.h"

keyboard::keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
}

keyboard::~keyboard()
{
    delete ui;
}


QString keyboard::getData()
{
    return(ui->lineEdit->text());
}

void keyboard::setData(const QString &labelText, const QString &lineeditText)
{
    ui->label_4->setText(labelText);
    ui->lineEdit->setText(lineeditText);
}

void keyboard::on_pushButton_104_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_104->text());
}

void keyboard::on_pushButton_99_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_99->text());
}

void keyboard::on_pushButton_107_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_107->text());
}

void keyboard::on_pushButton_86_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_86->text());
}
void keyboard::on_pushButton_91_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_91->text());
}

void keyboard::on_pushButton_101_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_101->text());
}
void keyboard::on_pushButton_109_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_109->text());
}

void keyboard::on_pushButton_106_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_106->text());
}
void keyboard::on_pushButton_96_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_96->text());
}

void keyboard::on_pushButton_111_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_111->text());
}

void keyboard::on_pushButton_93_clicked() // Enter
{
    this->accept();
}

void keyboard::on_pushButton_89_clicked()
{
    ui->lineEdit->backspace();
}

void keyboard::on_pushButton_clicked()
{
    ui->lineEdit->clear();
}
