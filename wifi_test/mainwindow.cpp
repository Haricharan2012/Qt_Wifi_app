#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "stdlib.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_2_clicked()
{
    QString ssid= ui->lineEdit->text();
    QString pass= ui->lineEdit_2->text();




   // char temp[10];
   // char sim[10];

    std::string ssidtx  = ssid.toStdString();  //.c_str();
    std::string passtx = pass.toStdString();  //.c_str();


    const char* ssix = ssidtx.c_str();
    const char* passix= passtx.c_str();


    qDebug("dodo");
    qDebug("%s",passtx);

   // sprintf(temp,"%s",ssid);
   // sprintf(sim,"%s",pass);


    //char ssid[10] = ui->lineEdit->text();


    char fincmd[100];

   QMessageBox::information(this, "wifi-notify" , "establishing connection");


   //-----------------string crt --------------------------------//

   sprintf(fincmd,"nmcli dev wifi connect '%s' password '%s'",ssix,passix);

   QMessageBox::information(this, "wifi-notifyx" ,fincmd);

    system(fincmd);

}


void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

