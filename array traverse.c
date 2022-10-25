#include<stdio.h>
#define MAX 10
void traverse(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)

        printf("%d ",a[i]);
        printf("\n");

}
int main()
{
    int arr[MAX],size=0,data,loc;
    printf("Enter data(the negative to terminate:\n");
    scanf("%d",&data);

    while(data>=0)
    {
        arr[size]=data;
        size++;
        if(size==MAX)
        {
            printf("array is full:\n");
            break;
        }
        scanf("%d",&data);

    }
    traverse(arr,size);
}
