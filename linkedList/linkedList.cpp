#include "linkedList.h"

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

address Alokasi(infotype x){
    address P;
    P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void dealokasi(address D){
    delete D;
}

void insertFirst(List &L, address P){
    if(first(L)!=NULL){
        next(P) = first(L);
        first(L) = P;
    }else{
        first(L) = P;
        last(L) = P;
    }
}

void print(List L){
    address P;
    P = first(L);
    if(P != NULL){
        while(P!=NULL){
            cout<<info(P).name<<" - "<<info(P).umur<<endl;
            P = next(P);
        }
    }else{
        cout<<"NULL"<<endl;
    }
}

void deleteFirst(List &L){
    address P;
    P = first(L);
    first(L) = next(P);
    next(P) = NULL;
    dealokasi(P);
}

void deleteLast(List &L){
    address P;
    P = first(L);
    while(next(P)!=last(L)){
        P = next(P);
    }
    last(L) = P;
    P = next(last(L));
    next(last(L)) = NULL;
    dealokasi(P);
}

address searching(List &L, string name){
    address P;
    P =first(L);
    while((P!=NULL) && (info(P).name != name)){
        P = next(P);
    }
    return P;
}

void insertAfter(List &L, address prec, address P){
    if(next(prec) == NULL){
        next(prec) == P;
        last(L) = P;
    }else{
        next(P) = next(prec);
        next(prec) = P;
    }
}
