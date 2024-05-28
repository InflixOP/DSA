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

int search(struct array arr,int x){
    int l=0,h=arr.length-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(x==arr.A[mid]){
            return mid;
        }else if(x>arr.A[mid]){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return -1;
}

int RecursiveBinary(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key=a[mid]){
            return mid;
        }else if(key>a[mid]){
            return RecursiveBinary(a,mid+1,h,key);
        }else{
            return RecursiveBinary(a,l,mid-1,key);
        }
    }
    return -1;
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
    cout<<"The index of search is:"<<search(arr,4)<<endl;
    display(arr);
}