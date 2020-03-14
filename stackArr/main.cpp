#include <iostream>
#include "stack.h"

int main()
{
    Stack S;

    /** for check func & procedure */
    createStack(S);
    for(int i=1;i<=6;i++){
        push(S,i+5);
    }
    cout<<"info: "; show(S);
    cout<<endl;
    for(int i=1;i<=2;i++){
        pop(S);
    }
    cout<<"info: "; show(S);
    cout<<endl;
    for(int i=1;i<=4;i++){
        pop(S);
    }
}
