#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class maxheap{
    int * arr;
    int size; // total elements in heap
    int total_size; // total size of array

public:
    maxheap(int n){
        arr=new int(n);
        size=0;
        total_size=n;
    }

    void insert(int val){
        if(size==total_size){
            cout<<"OVERFLOW";
            return;}
        arr[size]=val;
        int index=size;
        size++;

        while(index>0&&arr[(index-1)/2]<arr[index]){
            int temp=arr[index];
            arr[index]=arr[(index-1)/2];
            arr[(index-1)/2]=temp;
            index=(index-1)/2;
        }
        cout<<endl<<arr[index]<<" is inserted into heap";
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
};

int main(){
    maxheap m(5);
    m.insert(1);
    m.print();
    m.insert(2);
    m.print();
    m.insert(3);
    m.print();
    m.insert(4);
    m.print();
    m.insert(5);
    m.print();
}
