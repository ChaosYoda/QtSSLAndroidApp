#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <string>
#include <QNetworkAccessManager>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private slots:
    void on_pushButtonStag_clicked();

    void on_pushButtonEmbark_clicked();

    void on_pushbuttonReload_clicked();

    void on_pushButtonExit_clicked();

    void on_pushButtonWait_clicked();

    void waitFunction(int timeout);

   // void newslot();

private:
    Ui::Widget *ui;
};


#endif // WIDGET_H
