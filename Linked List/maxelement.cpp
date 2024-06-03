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

int maxelement(Node *p)
{
    int max=-32687;
    while(p!=NULL)
    {
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}
int Rmaxelement(Node *p)
{
    int x=0;
    if(p==0)return -263;
    else{
        x=Rmaxelement(p->next);
        if(x>p->data){
            return x;
        }else{
            return p->data;
        }
    }
}

int main()
{
    int A[]={4,5,8,9,7};
    create(A,5);
    cout<<Rmaxelement(first)<<endl;

    return 0;
}