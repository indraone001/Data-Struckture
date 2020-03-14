#include "stack.h"

bool emptyStack(Stack S){
    if(Top(S)==NULL){
        return true;
    }else{
        return false;
    }
}
void createStack(Stack &S){
    Top(S)=NULL;
}
void createNewElmt(infotype X, address &P){
    cout<<"input : ";
    cin>>X;
    P = new elmstack;
    info(P)=X;
    next(P)=NULL;
}
void push(Stack &S, address P){
    if(Top(S)==NULL){
        Top(S)=P;
    }else{
        next(P)=Top(S);
        Top(S)=P;
    }
}
void pop(Stack &S, address &P){
    if(Top(S)==NULL){
        cout<<"Stack kosong"<<endl;
    }else{
        P=Top(S);
        Top(S)=next(P);
        next(P)=NULL;
    }
}
void printInfo(Stack &S){
    Stack temp;
    createStack(temp);
    address P;
    do{
        pop(S,P);
        cout<<info(P)<<" -> ";
        push(temp,P);
    }while(Top(S)!=NULL);
    cout<<"NULL"<<endl;
    do{
        pop(temp,P);
        push(S,P);
    }while(Top(temp)!=NULL);
}
