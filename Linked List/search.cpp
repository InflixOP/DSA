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

void search(Node *p,int x){
    while(p!=NULL){
        if(x==p->data){
            cout<<"Search Successfull";
        }
        p=p->next;
    }
}
void movetohead(Node *p,int x){
    Node *q=NULL;
    while(p!=NULL){
        if(x==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
}

int main()
{
    int A[]={4,5,8,9,7};
    create(A,5);
    search(first,9);

    return 0;
}