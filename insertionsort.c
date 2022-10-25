#include<stdio.h>
void swap(int *x,int *y)
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
void insertsort(int a[],int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
                swap(&a[j],&a[j-1]);
            else
                break;

        }
    }
}
int main()
{
    int arr[]={2,34,76,48,9,20,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertsort(arr,size);
    printf("after sorting:\n");
    traverse(arr,size);

}
