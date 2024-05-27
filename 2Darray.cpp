#include<iostream>
using namespace std;

//Basic representation of 2D Array
int a[3][4]={{1,2,3,4},{1,2,3,4},{1,24,5,6}};

//Pointer in Stack and array in heap

int *b[3];
b[0]=new int[4];
b[1]=new int[4];
b[2]=new int[4];

//Both are in heap

int **C;
C=new int *[3];
C[0]=new int[4];
C[1]=new int[4];
C[2]=new int[4];