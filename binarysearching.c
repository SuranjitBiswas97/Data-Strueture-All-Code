#include<stdio.h>
#define MAX 10
int binarySearch(int arr[],int beg,int end,int item)
{
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==item)
            return mid+1;
        if(item>arr[mid])
            beg=mid+1;

        if(item<arr[mid])
            end=mid-1;
    }
    return-1;

}


int main()
{
    int arr[MAX],data,loc,item,size=0;
    printf("Enter the data: \n");
    scanf("%d",&data);
    printf("Enter the data to search: ");
    while(data>=0)
    {
        arr[size]=data;
        size++;
        if(size==10)
        {
            printf("array is full.");
            break;
        }
        scanf("%d",&data);
    }
    scanf("%d",&item);
    loc=binarySearch(arr,0,size,item);
    if(loc==-1)
        printf("Item is no found. \n");
    else
        printf("Array location: %d\n", loc);

}
