#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct tree {
    int data;
    tree* lptr;
    tree* rptr;
};
tree* root = NULL;
tree* insert(){
    tree* p;
    int x;
    cout << "Enter data(-1 for no node) : ";
    cin >> x;
    if(x==-1){
        return NULL;
    }
    p = new tree;
    p->data = x;
    cout << "Enter left child of : " << x << endl;
    p->lptr = insert();
    cout << "Enter right child of : " << x << endl;
    p->rptr = insert();
    return p;
}

void inOrderDFS(tree* node) {
    if (node == NULL) return;

    inOrderDFS(node->lptr);
    cout << node->data << " ";
    inOrderDFS(node->rptr);
}

void preOrderDFS(tree* node) {
    if (node == NULL) return;

    cout << node->data << " ";
    preOrderDFS(node->lptr);
    preOrderDFS(node->rptr);
}


void postOrderDFS(tree* node) {
    if (node == NULL) return;

    postOrderDFS(node->lptr);
    postOrderDFS(node->rptr);
    cout << node->data << " ";
}

int main() {

    root = insert();

    cout << "In-order: ";
    inOrderDFS(root);

    cout << "\nPre-order: ";
    preOrderDFS(root);

    cout << "\nPost-order: ";
    postOrderDFS(root);
    return 0;
}
