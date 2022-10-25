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
void push (struct node **headref,int item)
{
    struct node *newnode=makenode(item);
    newnode->next=*headref;
    *headref=newnode;
}
int main()
{
    struct node *head=NULL;
    int data;
    printf("Enter data (positive):\n");
    scanf("%d",&data);

    while(data>=0)
    {
        push(&head,data);
        scanf("%d",&data);

    }
    printf("\n\ntraversing...\n");
    traverse(head);
    printf("Enter data to insert:\n");
    scanf("%d",&data);
    push(&head,data);
    printf("\n\n\ntraversing...\n");
    traverse(head);

}
