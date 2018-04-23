#ifndef MYTIMER_H
#define MYTIMER_H
#include <QtCore>

class MyTimer : public QObject
{
     Q_OBJECT // <-- this make this a true q object to be able to add a singal
public:
    MyTimer();
    QTimer *timer;

public slots:
    void MySlot();
};

#endif // MYTIMER_H
