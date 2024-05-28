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

void append(struct array *arr,int x){
    if(arr->length<arr->size)
    arr->A[arr->length++]=x;
}

void insert(struct array *arr,int ind,int x){
    if(ind>=0 && ind<=arr->length){
        for(int i=arr->length;i>ind;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[ind]=x;
        arr->length++;
    }
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
    append(&arr,10);
    insert(&arr,2,99);
    display(arr);
}