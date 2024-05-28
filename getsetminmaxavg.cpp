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

int get(struct array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
}

int set(struct array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}

int max(struct array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}

int min(struct array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}

int sum(struct array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum+=arr.A[i];
    }
    return sum;
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
    cout<<"The element at the given index is:"<<get(arr,3)<<endl;
    cout<<"The maximum of the element is:"<<max(arr)<<endl;
    cout<<"The minimum of the element is:"<<min(arr)<<endl;
    cout<<"The sum of the element is:"<<sum(arr)<<endl;
}