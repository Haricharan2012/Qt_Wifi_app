
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "stdlib.h"
#include "stdio.h"
#include "QProcess"


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

    QProcess proc1;

    FILE * flpt;  //





   // char temp[10];
   // char sim[10];

    std::string ssidtx  = ssid.toStdString();  //.c_str();
    std::string passtx = pass.toStdString();  //.c_str();


    const char* ssix = ssidtx.c_str();
    const char* passix= passtx.c_str();



    flpt = fopen("wifi.sh", "w+");   // open a file in  writing mode

    system("chmod u+x wifi.sh");  //making sh file executable

    if(flpt==NULL)
    {
        qDebug() << "file not opened";
    }

    else
    {

        qDebug() << "\n file opened";


   //adding text in file

        fprintf(flpt,"#!/usr/bin/bash\n");
        fprintf(flpt,"echo \"Enabling wifi connection\" \n ");
        fprintf(flpt,"nmcli dev wifi connect \"%s\" password \"%s\" \n ",ssix,passix);


        fclose(flpt);
        printf("\ndata is written successfully");
        printf("\nfile is now closed");
        system("./wifi.sh");                  //executing the sh file
    }

}






void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

