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

void insertsort(struct array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while(i>=0&& arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
    }
    arr->A[i+1]=x;
    arr->length++;
}
int isSorted(struct array arr)
{
 int i;
 for(i=0;i<arr.length-1;i++)
 {
 if(arr.A[i]>arr.A[i+1])
 return 0;
 }
 return 1;
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
    insertsort(&arr,3);
    display(arr);
}