#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    printf("%d\n",*p);
    void *vp;
    vp=&a;
    printf("%d\n",*(int *)vp);
    int *q;
    q=&a;
    printf("%d\n",*q);

}
