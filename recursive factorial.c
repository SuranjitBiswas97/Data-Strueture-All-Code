#include<stdio.h>
int recursivefact(int n)
{
    int fact=1;
    if(n==0)
        return 1;
    fact=n*recursivefact(n-1);
    return fact;
}
int main()
{
    int n,fact;
    printf("Enter the data: \n");
    scanf("%d",&n);
    fact=recursivefact(n);
    printf("%d",fact);
}
