#include<stdio.h>
struct binarytree
{
    int data;
    struct binarytree *left;
    struct binarytree *right;
};
struct binarytree *makebt(int item)
{
    struct binarytree *t=(struct binarytree *)malloc(sizeof(struct binarytree));

    t->data=item;
    t->left=NULL;
    t->right=NULL;
    return t;
}
void preorder(struct binarytree *root)
{
    if(root==NULL)
        return ;

   printf("%d ",root->data);
   preorder(root->left);
   preorder(root->right);

}
void inorder(struct binarytree *root)
{
    if(root==NULL)
        return ;

   inorder(root->left);
   printf("%d ",root->data);
   inorder(root->right);

}

void postorder(struct binarytree *root)
{
    if(root==NULL)
        return ;


   postorder(root->left);
   postorder(root->right);
   printf("%d ",root->data);

}
int main()
{
    struct binarytree *root=NULL;
    struct binarytree *t1=makebt(1);
    struct binarytree *t2=makebt(2);
    struct binarytree *t3=makebt(3);
    struct binarytree *t4=makebt(4);
    struct binarytree *t5=makebt(5);
    struct binarytree *t6=makebt(6);

    root=t1;
    root->left=t2;
    root->right=t3;
    root->left->left=t4;
    root->left->right=t5;
    root->right->right=t6;

    printf("traversing ...\n");
    printf("preorder traversing...\n");
    preorder(root);
    printf("\n");


    printf("traversing ...\n");
    printf("inorder traversing...\n");
    inorder(root);
    printf("\n");



    printf("traversing ...\n");
    printf("postorder traversing...\n");
    postorder(root);
    printf("\n");



}



