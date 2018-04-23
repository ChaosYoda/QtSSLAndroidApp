#include "widget.h"
#include "ui_widget.h"

#include <QUrl>
#include <QNetworkReply>
#include <QTimer>
#include <QString>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setText("There there ");
}
void error(const char *msg)
{
    perror(msg);
    exit(0);
}


Widget::~Widget()
{

    delete ui;

}

void Widget::on_pushButtonStag_clicked()
{
    ui->pushButtonStag->setStyleSheet("background-color: red");

    QUrl url("url");
    url.setUserName("");
    url.setPassword("");
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    qDebug() <<" manager created " << endl;
   //QNetworkReply reply =
   manager->get(QNetworkRequest(url));
   //reply.close();
   ui->label->setText("Stagnated process");
   waitFunction(2000);
   ui->label->setText("Ready");
   ui->pushButtonStag->setStyleSheet("background-color: green");

}

void Widget::on_pushButtonEmbark_clicked()
{
    ui->pushButtonEmbark->setStyleSheet("background-color: red");
    QUrl url("");
    url.setUserName("");
    url.setPassword("");
     QNetworkAccessManager* manager = new QNetworkAccessManager(this);
   //QNetworkReply reply =
   manager->get(QNetworkRequest(url));
   //reply.close();
   ui->label->setText("Embarked");
   waitFunction(2000);
   ui->label->setText("Ready");
   ui->pushButtonEmbark->setStyleSheet("background-color: green");



}

void Widget::on_pushbuttonReload_clicked()
{
     QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    //QNetworkAccessManager manager =  QNetworkAccessManager(this);
    QUrl url("");
    url.setUserName("");
    url.setPassword("");
    //QNetworkReply reply =
    manager->get(QNetworkRequest(url));
    //connect(reply, SIGNAL(finished()), this, SLOT(newslot()));


    //reply.close();
    ui->label->setText("Rebooted Raspberry pi");
    waitFunction(2000);
    ui->label->setText("Ready");
    //this->showNormal();
   // QApplication::setActiveWindow(*ui);

}

void Widget::on_pushButtonExit_clicked()
{
   QApplication::quit();
}

void Widget::on_pushButtonWait_clicked()
{
   // ui->label->setText("Button pushed");

    QNetworkAccessManager *manager =  new QNetworkAccessManager(this);
    QUrl url("");
    url.setUserName("");
    url.setPassword("");

   //QNetworkReply* reply =
    manager->get(QNetworkRequest(url));

    ui->label->setText("Stopped");
    waitFunction(15000);


    QUrl url2("");
    url.setUserName("");
    url.setPassword("");

   //QNetworkReply* reply2 =
    manager->get(QNetworkRequest(url2));

   ui->label->setText("Start");
   waitFunction(15000);
   ui->label->setText("Ready");

}

void Widget::waitFunction(int timeout)
{
    QTimer t;
    t.start(timeout);

    QEventLoop loop;
    connect(&t, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}

/*
void Widget::newslot()
{
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    // there you can handle reply as you wish
    ui->label->setText("** " + reply->);
}
*/


