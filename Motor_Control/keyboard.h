#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QDialog>

namespace Ui {
class keyboard;
}

class keyboard : public QDialog
{
    Q_OBJECT

public:
    explicit keyboard(QWidget *parent = nullptr);
    ~keyboard();

    QString getData();
    void setData(const QString &labelText, const QString &lineeditText);
  //  void setPage(int index);

private slots:
    void on_pushButton_104_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_107_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_91_clicked();

    void on_pushButton_101_clicked();

    void on_pushButton_109_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_96_clicked();

    void on_pushButton_111_clicked();

    void on_pushButton_93_clicked();

    void on_pushButton_89_clicked();

    void on_pushButton_clicked();

private:
    Ui::keyboard *ui;
};

#endif // KEYBOARD_H
