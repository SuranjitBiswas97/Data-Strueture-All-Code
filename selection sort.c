#include<stdio.h>
void swap(int *x,int*y)
{
    int temp =*x;
    *x = *y;
    *y =temp;

}
void selectionsort(int a[],int size)
{
    int i, j, min, minindex;
    for(i=0;i<size-1;i++)
    {
        min = a[i];
        minindex = i;
        for(j=i+j;j<size;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                minindex=j;

            }
        }
        swap (&a,&minindex);
    }
}
void traverse(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d",a[i]);
    printf("\n");

}
int main()
{
    int arr[]={8,1,4,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("unsorted array :\n");
    treverse (arr,size);
    printf("sorted array :\n");
    bubblesort(arr,size);


}
