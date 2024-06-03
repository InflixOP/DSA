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

int sum(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int Rsum(struct Node *p)
{
    if(p!=NULL)
    {
        return Rsum(p->next)+p->data;
    }
    else{
        return 0;
    }
}

int main()
{
    int A[]={4,5,8,9,7};
    create(A,5);
    cout<<sum(first)<<endl;
    cout<<Rsum(first)<<endl;
    return 0;
}