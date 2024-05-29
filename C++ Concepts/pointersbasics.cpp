#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    // int a=100;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // cout<<"Accessing variable a using pointer p"<<endl;
    // cout<<*p;
    // int a[5]={1,2,3,4,5};
    // int *p;
    // p=a;
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    //Creation of heap memory in c++
    int *p; 
    p=new int[5];
    delete [] p;
    return 0;
}


