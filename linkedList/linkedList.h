#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next

using namespace std;

struct infotype {
    string name;
    int umur;
};

typedef struct element *address;

struct element{
    infotype info;
    address next;
};

struct List{
    address first,last;
};

void createList(List &L);
address Alokasi(infotype x);
void dealokasi(address D);
void insertFirst(List &L, address P);
void print(List L);
void deleteFirst(List &L);
void deleteLast(List &L);
address searching(List &L, string name);
void insertAfter(List &L, address prec, address P);

#endif // LINKEDLIST_H_INCLUDED
