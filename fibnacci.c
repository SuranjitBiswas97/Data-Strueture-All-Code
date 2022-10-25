#include<stdio.h>
int fibnacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibnacci(n-1)+fibnacci(n-2);
}
int main()
{
    int n,fib;
    scanf("%d",&n);
    fib=fibnacci(n);
    printf("%d",fib);
}
