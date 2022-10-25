#include<stdio.h>
void swap (int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void traverse(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
     printf("\n");
}
void selectionsort(int a[], int size)
{
    int i, j, min, minIndex;
    for(i=0; i<size; i++)
    {
        min = a[i];
        minIndex = i;
        for(j=i; j<size; j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                minIndex = j;
            }
        }
        swap(&a[i], &a[minIndex]);
    }
}
int main ()
{
    int arr[]={64, 25,37, 15, 20, 7};
    int size = sizeof (arr)/ sizeof (arr[0]);
    printf("Unsorted Array\n");
    traverse(arr, size);
    printf("Sorted Array\n");
    selectionsort(arr, size);
    traverse(arr, size);
}
