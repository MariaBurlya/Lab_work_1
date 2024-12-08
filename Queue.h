#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;
public:
    void QPUSH(int value);
    void QPOP();
    void QGET();
    void PRINT();
};

#endif
