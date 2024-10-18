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

void kthsmallest(node *root,vector<int> &v){
    if(!root){
        return;
    }
    kthsmallest(root->left,v);
    v.push_back(root->data);
    kthsmallest(root->right,v);
}



int main(){
    int arr[10]={10,2,6,3,7,4,5,1,9,8};
    node *root=NULL;
    for(int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    vector<int> v;
    int k=1;
    kthsmallest(root,v);
    if(v.size()<k){
        cout<<"NOT POSSIBLE";
    }
    else{
        cout<<v[k-1];
    }
}

