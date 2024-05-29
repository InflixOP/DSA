#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
}r1;
int main(){
    cout<<"Enter length and Breadth"<<endl;
    cin>>r1.length>>r1.breadth;
    Rectangle *p=&r1;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}