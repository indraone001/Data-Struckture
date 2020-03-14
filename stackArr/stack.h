#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#define top(S) S.top
#define info(S) S.info

using namespace std;

typedef int infotype;
const int nMax = 5;
struct Stack{
    int top;
    infotype info[nMax];
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, int x);
int pop(Stack &S);
void show(Stack S);

#endif // STACK_H_INCLUDED
