#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *makenode (int item)
{
    struct node *newnode =(struct node *)malloc(sizeof(struct node));

    newnode->data=item;
    newnode->next=NULL;
    return newnode;
}
void traverse(struct node *head)
{
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
int main()
{
    struct node *n1=makenode(10);
    struct node *n2=makenode(20);
    struct node *n3=makenode(30);
    struct node *n4=makenode(40);
    struct node *n5=makenode(50);

    struct node *head;
    head=n1;
    n1->next=n2;
    n1->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    printf("traversing linked list:\n");
    traverse(head);

}
