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
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);


}
void inorder(struct binarytree *root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);


}
void postorder(struct binarytree *root)
{
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);


}
int main()
{
    struct binarytree *root=NULL;
    struct binarytree *n1=makebt(1);
    struct binarytree *n2=makebt(2);
    struct binarytree *n3=makebt(3);
    struct binarytree *n4=makebt(4);
    struct binarytree *n5=makebt(5);
    struct binarytree *n6=makebt(6);

    root=n1;
    root->left=n2;
    root->right=n3;
    root->left->left=n4;
    root->left->right=n5;
    root->right->right=n6;
    printf("traversing...\n");
    printf("preorder traverse:\n");
    preorder(root);
    printf("\n");

    printf("traversing...\n");
    printf("inorder traverse:\n");
    inorder(root);
    printf("\n");

    printf("traversing...\n");
    printf("postorder traverse:\n");
    postorder(root);
    printf("\n");




}


