#include "Tree.h"

address allocation(infotype x){
    address node;
    node = new elmTree;
    left(node)  = NULL;
    right(node) = NULL;
    value(node) = x;
    return node;
}


void insertBST(address &root, address node){
    if(root == NULL){
        root=node;
    }else{
        if(value(node)>value(root)){
            if(right(root)==NULL){
                right(root)=node;
            }else{
                insertBST(right(root),node);
            }
        }else if(value(node)<value(root)){
            if(left(root)==NULL){
                left(root)=node;
            }else{
                insertBST(left(root),node);
            }
        }
    }
}

void inOrder(address root){
    if(root!=NULL){
        inOrder(left(root));
        cout<<value(root)<<" ";
        inOrder(right(root));
    }
}

address findNode(address root, infotype x){
    if((root == NULL) || (value(root) == x)){
        return root;
    };
    if(x>value(root)){
        return findNode(right(root),x);
    }else{
        return findNode(left(root),x);
    }
}

void printLeaves(address root){
    if(root != NULL){
        printLeaves(left(root));
        printLeaves(right(root));
        if((left(root)==NULL) && (right(root)==NULL)){
            cout<<value(root)<< " ";
        }
    }
}
