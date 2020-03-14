#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

#define info(Q) Q.info
#define head(Q) Q.head
#define tail(Q) Q.tail

using namespace std;

const int nMax = 5;
typedef int infotype;
struct Queue{
    infotype info[nMax];
    int head, tail;
};

void createQueue(Queue &Q);
bool isFull(Queue Q);
bool isEmpty(Queue Q);
void enQueue(Queue &Q, int X);
int deQueue(Queue &Q);
void show(Queue Q);

#endif // QUEUE_H_INCLUDED
