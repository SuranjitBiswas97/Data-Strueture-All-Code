#include<stdio.h>
void  arrayReturner (int newA[],int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("%d\n",newA[i]*newA[i]);

    }


}
int main()
{
    int arr[3];
    int i;
    for(i=0;i<3;i++)
    scanf("%d",&arr[i]);
    printf("\n");
    int size=sizeof(arr)/sizeof(arr[0]);
    arrayReturner (arr,3);


}
