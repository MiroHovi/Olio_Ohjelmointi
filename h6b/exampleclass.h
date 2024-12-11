#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QDebug>


class ExampleClass : public QObject { // ExampleClass inherits from QObject

    Q_OBJECT

public:

    explicit ExampleClass(QObject* parent = nullptr);  // Constructor


    void startToWait();

signals:   // Signal emitted when the waiting method finishes

    void readyToSay();

public slots:

    void sayHelloSlot();
};

#endif
