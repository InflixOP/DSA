#include<iostream>
using namespace std;
//Call by value
// int add(int a,int b){
//     int c;
//     c=a+b;
//     return c;
// }
//Call by Address
// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
//Call by reference
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=10;
    int b=12;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}

