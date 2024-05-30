#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = new Array[sizeof(struct Array)];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr4 = new Array[sizeof(struct Array)];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
           j++;
        else{
            arr4->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr4->length = k;
    arr4->size = 10;
    return arr4;
}
struct Array *Minus(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr5 = new Array[sizeof(struct Array)];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr5->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr5->A[k++] = arr1->A[i];
    arr5->length = k;
    arr5->size = 10;
    return arr5;
}
int main()
{
    struct Array arr1 = {{2, 9, 21, 28, 35}, 10, 5};
    struct Array arr2 = {{2, 9, 16, 18, 28}, 10, 5};
    struct Array *arr3,*arr4,*arr5;
    arr3 = Union(&arr1, &arr2);
    arr4=Intersection(&arr1,&arr2);
    arr5=Minus(&arr1,&arr2);
    Display(*arr3);
    Display(*arr4);
    Display(*arr5);
    return 0;
}