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

bool search(node *root,int var,bool b){
    if(b){
        return b;
    }
    if(root==NULL){
        return 0;
    }
    if(var==root->data){
        b=1;
        return 1;
    }
    if(var>root->data){
        search(root->right,var,b);
    }
    else
        search(root->left,var,b);
    return b;
}



int main(){
    int arr[10]={10,2,6,3,7,4,5,1,9,8};
    node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    int searchint=10;
    bool b=false;
    bool a=search(root,searchint,b);
    if(a){
        cout<<endl<<"FOUND"<<endl;
    }
    else
        cout<<endl<<"NOT FOUND"<<endl;
}


