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

void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;
 t=new Node;
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;

 }


}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);


 Insert(first,3,5);
 Display(first);
 return 0;
}