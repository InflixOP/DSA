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

int deletetion(struct array *arr,int ind){
    int x=0;
    if(ind>=0 && ind<=arr->length-1){
        x=arr->A[ind];
        for(int i=ind;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
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
    cout<<deletetion(&arr,2)<<endl;
    display(arr);
}