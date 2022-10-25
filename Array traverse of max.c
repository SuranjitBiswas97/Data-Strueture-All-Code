#include<stdio.h>
#define max 10
int traverse(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);

    }
    return size-1;
}

int main()
{
    int arr[max],size=0,data;
    printf("enter data(negative to terminate:\n");
    scanf("%d",&data);
    while(data>0)
    {
        arr[size]=data;
        size++;
        if(size==max)
        {
            printf("array is full.\n");
            break;

        }
        scanf("%d",&data);

    }
    traverse(arr,size);

}
