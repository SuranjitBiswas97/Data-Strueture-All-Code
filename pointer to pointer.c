#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    printf("%d\n",*p);
      printf("%d\n",p);
    int **q;
    q=&p;
    printf("%d\n",**q);
    printf("%d\n",*q);
    int ***r;
    r=&q;
    printf("%d\n",***r);
     printf("%d\n",**r);

}

