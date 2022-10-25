#include<stdio.h>
#define MAX 10
void traverse(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int insertArray(int a[],int size,int data,int loc)
{
    //Check overflow
    if( (size == MAX) || (loc > size) )
    {
        printf("Array Overflow.\n");
        return size;
    }
    int i;
    for(i=size; i>loc; i--)
    {
        a[i] = a[i-1];
    }
    a[loc] = data;
    size++;
    return size;
}

int deleteArray(int a[],int size,int loc)
{
    //Check Underflow
    if(loc >= size)
    {
        printf("Array Underflow.\n");
        return size;
    }
    int i;
    for(i=loc; i<size; i++)
    {
        a[i] = a[i+1];
    }
    return --size;
}

int main()
{
    int arr[MAX], size=0, data, loc;
    printf("Enter Data(Negative to terminate):\n");
    scanf("%d",&data);
    while(data>=0)
    {
        arr[size] = data;
        size++;
        if(size==MAX)
        {
            printf("Array is Full.\n");
            break;
        }
        scanf("%d",&data);
    }
    traverse(arr,size);

    printf("\nEnter Data and location to insert a new data:\n");
    printf("Data:");
    scanf("%d",&data);
    printf("Location:");
    scanf("%d",&loc);
    size = insertArray(arr,size,data,loc-1);
    printf("\nAfter Insertion:\n");
    traverse(arr,size);

    printf("\n\nEnter location to delete: ");
    scanf("%d",&loc);
    size = deleteArray(arr,size,loc-1);
    printf("\nAfter Deletion:\n");
    traverse(arr,size);
}
