#include<stdio.h>
#define MAX 10
void traverse(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int arr[MAX], size=0, data;
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
}
