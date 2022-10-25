#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *makeNode(int item)
{
    struct node *newNode = (struct node *)malloc
                              (sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;
    return newNode;
}

void traverse(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void append(struct node **headRef, int data)
{
    struct node *newNode = makeNode(data);
    struct node *ptr = *headRef, *temp;
    if( ptr == NULL )
    {
        *headRef = newNode;
        return;
    }
    while(ptr != NULL)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = newNode;

}
int main()
{

    struct node *head = NULL;
    int data;
    printf("Enter Positive Data:\n");
    scanf("%d",&data);

    while( data>=0 )
    {
        append(&head,data);
        scanf("%d",&data);
    }
     printf("\nTraversing...\n");
     traverse(head);
}
