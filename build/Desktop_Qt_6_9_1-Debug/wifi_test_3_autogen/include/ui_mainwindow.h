/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QWidget *ttlebox;
    QHBoxLayout *horizontalLayout_8;
    QWidget *framex;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 306);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"* {\n"
"\342\200\257\342\200\257\342\200\257\342\200\257\342\200\257background: qradialgradient(cx: 0.3, cy: -0.4, fx: 0.3, fy:\n"
"-0.4, radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"\342\200\257\342\200\257\342\200\257\342\200\257\342\200\257color: rgb(90, 30, 255);\n"
"\342\200\257\342\200\257\342\200\257\342\200\257\342\200\257border: 1px solid #ffffff;\n"
"}\n"
"\n"
"QPushButton\n"
" {\n"
"color: blue;\n"
"border: 2px solid blue;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:orange;\n"
"}\n"
"\n"
"QPushButton#pushButton_2\n"
"{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"color: silver;\n"
"}\n"
"\n"
"QPushButton#pushButton\n"
"{\n"
"border:2px solid orange;\n"
"border-radius:10px;\n"
"padding: 0 5px;\n"
"background: white;\n"
"color: crimson;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QcentralWidget\n"
" {\n"
" background-color: #FF0A0A;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 36, 21, 20));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/wifi2.png);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/wifi2.png")));
        ttlebox = new QWidget(centralwidget);
        ttlebox->setObjectName("ttlebox");
        ttlebox->setGeometry(QRect(30, 20, 441, 51));
        ttlebox->setStyleSheet(QString::fromUtf8("#ttlebox { \n"
"border: 3px solid;\n"
"background: #8FBC8B;\n"
" }"));
        horizontalLayout_8 = new QHBoxLayout(ttlebox);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        framex = new QWidget(centralwidget);
        framex->setObjectName("framex");
        framex->setGeometry(QRect(30, 70, 441, 191));
        framex->setStyleSheet(QString::fromUtf8("#framex { \n"
"border: 3px solid;\n"
"background: #D3D3D3;\n"
" }"));
        verticalLayout_4 = new QVBoxLayout(framex);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(framex);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(500, 200));
        label->setSizeIncrement(QSize(40, 10));
        label->setStyleSheet(QString::fromUtf8("QLabel#label\n"
"{\n"
" padding: 0 5px;\n"
"color: black;\n"
"}"));

        horizontalLayout_5->addWidget(label);

        lineEdit = new QLineEdit(framex);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(framex);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2\n"
" {\n"
"   padding: 0 5px;\n"
"color:black;\n"
"}"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_2 = new QLineEdit(framex);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setInputMethodHints(Qt::InputMethodHint::ImhDialableCharactersOnly|Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhNoAutoUppercase|Qt::InputMethodHint::ImhNoPredictiveText|Qt::InputMethodHint::ImhSensitiveData);
        lineEdit_2->setFrame(true);
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton = new QPushButton(framex);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(100, 10));
        pushButton->setMaximumSize(QSize(167, 35));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton\n"
" {\n"
"padding: 0 20px;\n"
"background-color:	#808080;\n"
"color: white;\n"
"border: 1px solid green;\n"
"}\n"
"\n"
"#pushButton:hover { background-color: #66c011; }"));

        horizontalLayout_7->addWidget(pushButton, 0, Qt::AlignmentFlag::AlignRight);

        pushButton_2 = new QPushButton(framex);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(100, 0));
        pushButton_2->setMaximumSize(QSize(167, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2\n"
" {\n"
"  border: 1px solid green;\n"
" padding: 0 10px;\n"
"background:	#808080;\n"
"color: white;\n"
" \n"
"}\n"
"\n"
"#pushButton_2:hover { background-color: #66c011; }"));

        horizontalLayout_7->addWidget(pushButton_2, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 30, 41, 31));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/wifi2.png")));
        MainWindow->setCentralWidget(centralwidget);
        framex->raise();
        ttlebox->raise();
        label_4->raise();
        label_5->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "SSID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "KEY", nullptr));
        lineEdit_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", " WIFI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
