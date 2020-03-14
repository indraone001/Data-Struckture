#include "Queue.h"

void createQueue(Queue &Q){
    head(Q) = -1;
    tail(Q) = -1;
}

bool isFull(Queue Q){
    if((head(Q)==0)&&(tail(Q)==nMax-1)){
        return true;
    }else if(tail(Q) == head(Q)-1){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(Queue Q){
    if(head(Q)==-1){
        return true;
    }else{
        return false;
    }
}

void enQueue(Queue &Q, int X){
    if(!isFull(Q)){
        if(isEmpty(Q)){
            tail(Q)=0;
            head(Q)=0;
            info(Q)[tail(Q)]=X;
        }else if((head(Q)!=0)&&(tail(Q)==nMax-1)){
            tail(Q)=0;
            info(Q)[tail(Q)]=X;
        }else{
            tail(Q)++;
            info(Q)[tail(Q)]=X;
        }
    }else{
        cout<<"Queue FULL!!"<<endl;
    }
}

int deQueue(Queue &Q){
    int temp;
    if(isEmpty(Q)){
        return -1;
    }else{
        if((head(Q)==nMax-1)&&(tail(Q)!=nMax-1)){
            temp=info(Q)[head(Q)];
            head(Q)=0;
            return temp;
        }else{
            temp=info(Q)[head(Q)];
            head(Q)++;
            return temp;
        }
    }
}

void show(Queue Q){
    if(isEmpty(Q)){
        cout<<"Empty!!"<<endl;
    }else{
        cout<<"output: ";
        while(head(Q)!=tail(Q)){
            cout<<info(Q)[head(Q)]<<" ";
            head(Q)++;
            if((head(Q)==nMax-1)&&(tail(Q)!=nMax-1)){
                cout<<info(Q)[head(Q)]<<" ";
                head(Q)=0;
            }
        }
        cout<<info(Q)[head(Q)]<<" ";
        cout<<endl;
    }
}
