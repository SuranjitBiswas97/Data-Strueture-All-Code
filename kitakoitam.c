#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
     printf("Gcd is %d",c);



}
int gcd(int x,int y)
{
    while(x!=y){

        if(x>y)
       {

          return (x=x-y);
       }

    else{

        return (y=y-x);

    }
     printf("Gcd is %d",gcd);

    }




}
