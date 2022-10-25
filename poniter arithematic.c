#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    int *q;
    q=q++;
    q=10;
    printf("%d\n",a);
    printf("%d\n",*p);
}
