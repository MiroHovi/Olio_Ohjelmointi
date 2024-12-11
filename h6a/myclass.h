#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace std;

class MyClass : public QObject {  // MyClass inherits QObject
    Q_OBJECT

public:
    MyClass(QObject* parent = nullptr);   // Constructor with optional parent parameter

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif
