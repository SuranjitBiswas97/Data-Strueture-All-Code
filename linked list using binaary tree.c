#include<stdio.h>
struct binarytree
{
    int data;
    struct binarytree *left;
    struct binarytree *right;
};
struct binarytree *makebt (int item)
{
    struct binarytree *t=(struct binarytree *)malloc(sizeof(struct binarytree));

    t->data=item;
    t->left=NULL;
    t->right=NULL;
    return t;
}
int main()
{
    struct binarytree *root=NULL;
    struct binarytree *t1=makebt(1);
    struct binarytree *t2=makebt(2);
    struct binarytree *t3=makebt(3);
    struct binarytree *t4=makebt(4);
    struct binarytree *t5=makebt(5);


    root=t1;
    t1->left=t2;
    t2->left=t3;
    t3->left=t4;
    t3->right=t5;



}

