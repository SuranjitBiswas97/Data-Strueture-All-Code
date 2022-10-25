#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void traverse(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)

    printf("%d ",a[i]);
    printf("\n");


}
void bubblesort(int a[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])


                swap(&a[j],&a[j+1]);

        }
    }
}
int main()
{
    int arr[]={65,20,15,25,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    printf("after sorting:\n");
    traverse(arr,size);
}
