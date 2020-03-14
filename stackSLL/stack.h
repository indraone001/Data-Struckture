#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#define Top(S) S.Top
#define info(P) P->info
#define next(P) P->next

using namespace std;

typedef int infotype;
typedef struct elmstack *address;
struct elmstack{
    infotype info;
    address next;
};
struct Stack{
    address Top;
};

bool emptyStack(Stack S);
void createStack(Stack &S);
void createNewElmt(infotype X, address &P);
void push(Stack &S, address P);
void pop(Stack &S, address &P);
void printInfo(Stack &S);

#endif // STACK_H_INCLUDED
