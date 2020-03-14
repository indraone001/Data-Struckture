#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

#define left(P) P->left
#define right(P) P->right
#define value(P) P->value

using namespace std;

typedef int infotype;
typedef struct elmTree *address;
struct elmTree{
    infotype value;
    address left,right;
};

address allocation(infotype x);
void insertBST(address &root, address node);
void inOrder(address root);
address findNode(address root, infotype x);
void printLeaves(address root);

#endif // TREE_H_INCLUDED
