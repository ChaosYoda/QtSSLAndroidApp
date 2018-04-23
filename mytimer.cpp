#include "mytimer.h"
#include <QtCore>
#include <QtDebug>
MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout(), this ,SLOT(MySlot));

     timer->start(1000);

}

void Mytimer::MySlot()
{

}
