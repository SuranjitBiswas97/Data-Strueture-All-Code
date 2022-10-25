#include<stdio.h>
int main()
{
    int a[10];
    int s=sizeof(a)/sizeof(a[0]);
    printf("%d\n",s);
}
