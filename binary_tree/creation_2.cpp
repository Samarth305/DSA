#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left,*right;

    node(int val){
        data=val;
        right=left=NULL;
    }
};

node* binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node *temp=new node(x);
    cout<<"enter left child of "<<x<<" - ";
    temp->left=binarytree();
    cout<<"enter right child of "<<x<<" - ";
    temp->right=binarytree();
    return temp;
}

void preorder(node* temp){
    if(temp==NULL)
        return;
    cout<<" "<<temp->data;
    preorder(temp->left);
    preorder(temp->right);
}

void inorder(node *temp){
    if(temp==NULL)
            return;
    inorder(temp->left);
    cout<<" "<<temp->data;
    inorder(temp->right);

}

void postorder(node *temp){
    if(temp==NULL)
        return;
    postorder(temp->left);
    postorder(temp->right);
    cout<<" "<<temp->data;
}

vector<int> levelorder(node* root){
    queue<node*> q;
    q.push(root);
    vector<int> v;
    node *temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        v.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return v;
}

int main(){
    cout<<"enter root node - ";
    node *root=binarytree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    vector<int> v=levelorder(root);
    cout<<endl;
    for(auto val:v){
        cout<<" "<<val;
    }
}
