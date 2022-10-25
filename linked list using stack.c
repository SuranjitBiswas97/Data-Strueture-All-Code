#include<stdio.h>
#include<limits.h>
struct stacknode
{
    int data;
    struct stacknode *next;
};
struct stacknode *makestacknode (int item)
{
    struct stacknode *s=(struct stacknode *)malloc(sizeof(int ));

    s->data=item;
    s->next=NULL;
    return s;

}
int isempty(struct stacknode *tos)
{
    return !tos;
}
void push(struct stacknode **tos,int item)
{
    struct stacknode *s=makestacknode(item);
    s->next=*tos;
    *tos=s;
}
int pop(struct stacknode **tos)
{
    if(isempty(tos))
    {
        printf("stack is underflow:\n");
        return INT_MIN;
    }
    struct stacknode *temp=*tos;
    int item=(*tos)->data;
    *tos=(*tos)->next;
    free(temp);
    return item;
}
int main()
{
    struct stacknode *s=NULL;
    int data;
    printf("Enter data(positive):\n");
    scanf("%d",&data);

    while(data>=0)
    {
        push(&s,data);
        scanf("%d",&data);
    }
    printf("\n\n\npopping....\n");
    while(!isempty(s))
    {
        printf("%d ",pop(&s));
    }
}
