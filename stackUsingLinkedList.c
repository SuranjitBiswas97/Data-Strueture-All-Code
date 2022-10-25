#include<stdio.h>
#include<limits.h>
struct stackNode
{
    int data;
    struct stackNode *next;
};

struct stackNode *makeStackNode(int data)
{
    struct stackNode *s = (struct stackNode *)
                malloc(sizeof(struct stackNode));
    s->data = data;
    s->next = NULL;
    return s;
}

int isEmpty(struct stackNode *tos)
{
    return  !tos;
}

void push(struct stackNode **tos, int data)
{
    struct stackNode *s = makeStackNode(data);
    s->next = *tos;
    *tos = s;
}

int pop(struct stackNode **tos)
{
    if( isEmpty(tos) )
    {
        printf("Underflow.\n");
        return INT_MIN;
    }
    struct stackNode *temp = *tos;
    int item = (*tos)->data;
    *tos = (*tos)->next;
    free(temp);
    return item;
}

int main()
{
    struct stackNode *s = NULL;
    int data;

    printf("Enter Data(Positive):\n");
    scanf("%d",&data);

    while( data>=0 )
    {
        push(&s,data);
        scanf("%d",&data);
    }

    printf("Popping...\n");
    while( !isEmpty(s) )
    {
        printf("%d ",pop(&s));
    }
}
