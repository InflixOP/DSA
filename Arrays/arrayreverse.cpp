#include <iostream>
using namespace std;
struct array{
    int A[10];
    int size;
    int length;
};

void display(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

void reverse(struct array *arr){
    int *b;
    int i,j;
    b=new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++)
        arr->A[i]=b[i];
}


int main(){
    array arr;
    int n,i;
    cout<<"Enter the size of the array";
    cin>>arr.size;
    cout<<"Enter the number of numbers";
    cin>>n;
    arr.length=n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    reverse(&arr);
    display(arr);
}