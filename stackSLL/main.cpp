#include <iostream>
#include "stack.h"

int main()
{
    Stack S;
    address P;
    infotype X;
    int temp;
    bool cek;

    createStack(S);
    cout<<"1. push"<<endl;
    cout<<"2. delete"<<endl;
    cout<<"3. show"<<endl;
    cout<<"4. Check"<<endl;
    do{
        cout<<"choose : ";
        cin>>temp;
        switch(temp){
        case 1:
            createNewElmt(X,P);
            push(S,P);
            break;
        case 2:
            pop(S,P);
            break;
        case 3:
            printInfo(S);
            break;
        case 4:
            cek=emptyStack(S);
            if(cek==true){
                cout<<"Stack kosong"<<endl;
            }else{
                cout<<"Stack tidak kosong"<<endl;
            }
        }
    }while(temp!=0);
    return 0;
}
