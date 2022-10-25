#include<stdio.h>
int recursivesum(int n)
{
    int sum;
    if(n==0)
        return ;
    sum=n+recursivesum(n-1);
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter to data:\n");
    scanf("%d",&n);
    sum=recursivesum(n);
    printf("%d\n",sum);
}
