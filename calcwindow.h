#ifndef CALCWINDOW_H
#define CALCWINDOW_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class CalcWindow;
}

class CalcWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalcWindow(QWidget *parent = 0);
    ~CalcWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::CalcWindow *ui;
    void setText(QString value);
};

#endif // CALCWINDOW_H
