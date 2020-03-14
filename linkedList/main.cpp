#include <iostream>
#include "linkedList.h"

int main()
{
    address P,prec;
    List L;
    createList(L);

    infotype x;
    x.name = "alex";
    x.umur = 19;
    P = Alokasi(x);
    insertFirst(L,P);

    x.name = "test";
    x.umur = 20;
    P = Alokasi(x);
    insertFirst(L,P);

    x.name = "joy";
    x.umur = 20;
    P = Alokasi(x);
    insertFirst(L,P);

    print(L);

    cout<<"After insertAfter"<<endl;
    x.name = "Alexander";
    x.umur = 20;
    P = Alokasi(x);

    prec = searching(L,"test");
    insertAfter(L, prec, P);
    print(L);
/**
    cout<<"after delete"<<endl;
    deleteLast(L);
    deleteLast(L);
    print(L);
**/

    return 0;
}
