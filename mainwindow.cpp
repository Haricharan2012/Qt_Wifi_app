#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "stdlib.h"
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
    QString ssid= ui->lineEdit->text();  //stores text enterd in ssid field
    QString pass= ui->lineEdit_2->text();

    QProcess proc1;  // qprocess variable





   // char temp[10];
   // char sim[10];

    std::string ssidtx  = ssid.toStdString();  //.c_str();   //convert Qstring type to standard string type
    std::string passtx = pass.toStdString();  //.c_str();


    const char* ssix = ssidtx.c_str();
    const char* passix= passtx.c_str();



   // proc1.start("nmcli", QStringList()<<"dev wifi connect" <<ssix << "password" << passix ");

    QStringList args;
    char outxx[100];


    args <<"dev" << "wifi" << "connect" <<ssix << "password" << passix;  //passing ssid and pass along with rest of the command

    proc1.start("nmcli",args);  // nmcli + rest of the command

    proc1.waitForFinished();





     QString out=proc1.readAllStandardOutput();

    // out=proc1.readAllStandardError(); //reports only error and read allstandard output report only succes output

     std::string outst  = out.toStdString();   // convert output to standar string format

     const char* outx=outst.c_str();

     sprintf(outxx,"%s",outx);

     //cout<<endl<<out.toStdString();
     QMessageBox::information(this, "wifi-notify" ,outxx);  //notify output in message box




}


void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->clear();  //clear the fields
    ui->lineEdit_2->clear();
}

