#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left,*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

node * insert(node *root,int val){
    if(!root){
        node *temp=new node(val);
        return temp;
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}

void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int arr[10]={10,2,6,3,7,4,5,1,9,8};
    node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    inorder(root);
}
