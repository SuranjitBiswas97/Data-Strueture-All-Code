#include<stdio.h>
struct manInfo
{
    int mfgYear;
    int expYear;
};
struct priceInfo
{
    int quantity;
    int sellingPrice;
    struct manInfo mi;
};
struct product
{
    int id;
    char name[25];
    struct priceInfo pi;
};

int main()
{
    struct product p1;
    p1.id = 1;
    strcpy(p1.name,"Soap");
    p1.pi.quantity = 10;
    p1.pi.sellingPrice = 35;
    p1.pi.mi.mfgYear = 2015;
    p1.pi.mi.expYear = 2017;
}
