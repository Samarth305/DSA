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

int main(){
    queue<node*> q;
    int x;
    cout<<"Enter root value - ";
    cin>>x;
    node *root=new node(x);
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<"Enter left child of "<<temp->data<<" - ";
        int first;
        cin>>first;
        if(first!=-1){
            temp->left=new node(first);
            q.push(temp->left);
        }
        cout<<"Enter right child of "<<temp->data<<" - ";
        int second;
        cin>>second;
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }
    }
}
