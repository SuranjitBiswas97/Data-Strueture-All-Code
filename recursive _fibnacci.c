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
    int n,f;
    printf("Enter the data: \n");
    scanf("%d",&n);
    fibnacci(n);
    printf("%d",n);


}
