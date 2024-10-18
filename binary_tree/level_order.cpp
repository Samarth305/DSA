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

void levelorder(struct tree* root){
    queue<struct tree*> q;
    q.push(root);
    while(!q.empty()){
        struct tree *temp=q.front();
        cout<<temp->data;
        q.pop();
        if(temp->lptr){
            q.push(temp->lptr);
        }
        if(temp->rptr){
            q.push(temp->rptr);
        }
    }
}

int main(){
    root=insert();
    levelorder(root);
    return 0;
}
