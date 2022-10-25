#include<stdio.h>
void toh(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c ->%c \n",a,c);
        return;
    }
    toh(n-1,a,c,b);
    printf("%c ->% c\n",a,c);
    toh(n-1,b,a,c);

}



int main()
{
    int n;
    printf("number of dis:");
    scanf("%d",&n);
    toh(n,'a','b','c');

}
