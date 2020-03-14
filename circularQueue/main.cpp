#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue Q;
    int X;
    int temp;

    createQueue(Q);
    cout<<"1. enQueue"<<endl;
    cout<<"2. deQueue"<<endl;
    cout<<"3. show"<<endl;
    do{
        cout<<"input: ";
        cin>>temp;
        switch (temp){
            case 1:
                cout<<"nilai: ";
                cin>>X;
                enQueue(Q,X);
                cout<<"head: "<<head(Q)<<" "<<"tail: "<<tail(Q)<<endl;
                break;
            case 2:
                deQueue(Q);
                cout<<"head: "<<head(Q)<<" "<<"tail: "<<tail(Q)<<endl;
                break;
            case 3:
                show(Q);
                break;
            default:
                cout<<"wrong input"<<endl;
                cout<<"head: "<<head(Q)<<" "<<"tail: "<<tail(Q)<<endl;
                break;
        }
    }while(temp!=0);
}
