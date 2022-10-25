#include<stdio.h>
int *sum(int *a,int *b)
{
    int r=(*a+*b);
    return &r;
}
int main()
{
    int a=5,b=10;
    int *x=sum(&a,&b);
    printf("%d\n",*x);
}
