#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    address Root = allocation(7);
    inOrder(Root);
    cout<<" insert 7"<<endl;

    address node = allocation(8);
    insertBST(Root,node);
    inOrder(Root);
    cout<<" insert 8"<<endl;

    Root = allocation(2);
    inOrder(Root);
    cout<<" insert 2"<<endl;

    node = allocation(3);
    insertBST(Root,node);
    inOrder(Root);
    cout<<" insert 3"<<endl;

    printLeaves(Root);
}
