#include<stdio.h>
struct product
{
    int id;
    char name[25];
    int quantity;
};
int main()
{
    struct product p1,p2[2],*p3;
    p1.id = 1;
    strcpy(p1.name,"Soap");
    p1.quantity = 10;

    p2[0].id = 2;
    strcpy(p2[0].name,"Shampoo");
    p2[0].quantity = 5;

    p2[1].id = 3;
    strcpy(p2[1].name,"Toothpaste");
    p2[1].quantity = 25;

    scanf("%d",&p3->id);
    strcpy(p3->name,"FaceWash");
    p3->quantity = 25;
    printf("%d\n",p3->quantity);
}
