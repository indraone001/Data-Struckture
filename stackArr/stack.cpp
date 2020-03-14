#include "stack.h"

void createStack(Stack &S){
    top(S)=-1;
}

bool isEmpty(Stack S){
    if(top(S)==-1){
        return true;
    }else{
        return false;
    }
}

bool isFull(Stack S){
    if(top(S)==nMax-1){
        return true;
    }else{
        return false;
    }
}

void push(Stack &S, int x){
    if(!isFull(S)){
        top(S)++;
        info(S)[top(S)]=x;
    }else{
        cout<<"stack isFull"<<endl;
    }
}

int pop(Stack &S){
    if(!isEmpty(S)){
        int x=info(S)[top(S)];
        top(S)--;
        return x;
    }else{
        cout<<"stack isEmpty"<<endl;
    }
}

void show(Stack S){
    while(!isEmpty(S)){
        cout<<pop(S)<" ";
    }
}
