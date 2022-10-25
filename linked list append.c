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
void push(struct node **headref,int item)
{
    struct node *newnode=makenode(item);
    newnode->next=*headref;
    *headref=newnode;
}
void append(struct node **headref,int item)
{
    struct node *newnode=makenode(item);
    struct node *ptr=*headref,*temp;
    if(ptr==NULL)
    {
        *headref=newnode;
        return;
    }
    while(ptr!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=newnode;
}
int main()
{
    struct node *head=NULL;
    int data;
    printf("Enter data positive:\n");
    scanf("%d",&data);
    while(data>=0)
    {
        append(&head,data);
        scanf("%d",&data);
    }
    printf("\n\n\ntraversing.....\n");
    traverse(head);
}
