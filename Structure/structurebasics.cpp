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
    int area=r1.length*r1.breadth;
    cout<<area<<endl;
    cout<<sizeof(area)<<endl;
    cout<<sizeof(r1.length)<<endl;
    cout<<sizeof(r1.breadth)<<endl;
}