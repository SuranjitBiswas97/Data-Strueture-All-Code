#include<stdio.h>
int main()

{
    int a[]={10,20,30};
    int size=sizeof(a)/sizeof(a[0]);
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");
    //operation
    for(i=0;i<size;i++)
    {
        a[i]=a[i]-5;
        printf("%d ",a[i]);
    }

    printf("\n");


}
