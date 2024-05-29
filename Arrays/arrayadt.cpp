#include <iostream>
using namespace std;
struct array{
    int *A;
    int size;
    int length;
};

void display(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}
int main(){
    array arr;
    int n,i;
    cout<<"Enter the size of the array";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"Enter the number of numbers";
    cin>>n;
    arr.length=n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    display(arr);
}