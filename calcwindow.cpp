#include "calcwindow.h"
#include "ui_calcwindow.h"
#include "tinyexpr.h"
CalcWindow::CalcWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalcWindow)
{
    ui->setupUi(this);
}

CalcWindow::~CalcWindow()
{
    delete ui;
}

void CalcWindow::setText(QString value){

    if (ui->textBrowser->toPlainText() == "0"){
        ui->textBrowser->setText(value);
    }
    else ui->textBrowser->setText(ui->textBrowser->toPlainText() + value);
}

void CalcWindow::on_pushButton_clicked()
{
    setText("1");
}

void CalcWindow::on_pushButton_2_clicked()
{
    setText("2");
}

void CalcWindow::on_pushButton_3_clicked()
{
    setText("3");
}

void CalcWindow::on_pushButton_4_clicked()
{
    setText("4");
}

void CalcWindow::on_pushButton_6_clicked()
{
    setText("5");
}

void CalcWindow::on_pushButton_5_clicked()
{
    setText("6");
}

void CalcWindow::on_pushButton_7_clicked()
{
    setText("7");
}

void CalcWindow::on_pushButton_9_clicked()
{
    setText("8");
}

void CalcWindow::on_pushButton_8_clicked()
{
    setText("9");
}

void CalcWindow::on_pushButton_10_clicked()
{
    setText(" * ");
}

void CalcWindow::on_pushButton_12_clicked()
{
    setText("0");
}

void CalcWindow::on_pushButton_11_clicked()
{
    setText(" / ");
}

void CalcWindow::on_pushButton_13_clicked()
{
    setText(" + ");
}

void CalcWindow::on_pushButton_14_clicked()
{
    setText(" - ");
}

void CalcWindow::on_pushButton_16_clicked()
{
    ui->textBrowser->setText(QString("0"));
}

void CalcWindow::on_pushButton_15_clicked()
{
    QString plainText = ui->textBrowser->toPlainText();  // Holding text in the textBrowser for further conversion into standard C string
    const char *standardText = plainText.toUtf8().constData();  // Didn't use std::string because te_tnterp takes C-style strings
    double answer = te_interp(standardText, 0);
    ui->textBrowser->setText(QString::number(answer));
}
