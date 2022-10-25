#include<stdio.h>
int recursivefact(int n)
{
    int fact=1;
    if(n==0)
        return 1;
    fact =n*recursivefact(n-1);
    return fact;

}
int main()
{
    int i,n,fact;
    scanf("%d",&n);
    fact=recursivefact(n);
    printf("%d\n",fact);

}


