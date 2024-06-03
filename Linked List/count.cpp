#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *last, *t;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t; 
        last=t;
    }
}

int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
int Rcount(struct Node *p){
    if(p==0){
        return 0;
    }else{
        return count(p->next)+1;
    }
}

int main()
{
    int A[]={4,5,8,9,7};
    create(A,5);
    cout<<count(first)<<endl;
    cout<<Rcount(first);
    return 0;
}