#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
//Call by value
int area(struct Rectangle r1){
    return r1.length*r1.breadth;
}

// Call by reference
int area1(struct Rectangle &r1){
    r1.length++;
    return r1.length*r1.breadth;
}
//Call by address
int area2(struct Rectangle *p,int l){
    p->length=l;
}
int main(){
    struct Rectangle r={10,5};
    cout<<area(r);
    cout<<endl<<area1(r)<<endl<<r.length;
    area2(&r,20);
    cout<<endl<<r.length;
}