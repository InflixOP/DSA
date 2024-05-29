#include<iostream>
using namespace std;

int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a=10;
    int b=12;
    int sum=add(a,b);
    cout<<sum<<endl;
    return 0;
}

