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
void selectionsort(int a[],int size)
{
    int i,j,min,minindex;
    for(i=0;i<size;i++)
    {
        min=a[i];
        minindex=i;
        {
            for(j=i;j<size;j++)
            {
                if(a[j]<min)
                {
                    min =a[j];
                    minindex =j;
                }
                swap(&a[i],&a[minindex]);
            }
        }
    }
}
int main()
{
    int arr[]={5,7,8,3,5,86,94,109,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    printf("after sorting:\n");
    traverse(arr,size);
}

