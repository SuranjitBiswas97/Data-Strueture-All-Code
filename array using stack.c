#include<stdio.h>
#include<limits.h>
struct stack
{
    unsigned capacity;
    int top;
    int *array;
};
struct stack *makestack (unsigned capacity)
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));

    s->capacity=capacity;
    s->top= -1;
    s->array=(int *)malloc(capacity*sizeof(int ));
    return s;
}
int isfull(struct stack *s)
{

    return (s->top==s->capacity-1);
}
int isempty(struct stack *s)
{
    return(s->top== -1);
}
void push(struct stack *s,int item)
{
    if(isfull(s))
    {
      printf("stack is overflow:\n");
      return;
    }
    s->top=s->top+1;
    s->array[s->top]=item;
}
int pop(struct stack *s)
{
    if(isempty(s))
    {
        printf("stack is underflow:\n");
        return INT_MIN;
    }
    int item =s->array[s->top];
    s->top=s->top-1;
    return item;
}
int main()
{
    int capacity,data;
    printf("capacity:");
    scanf("%d",&capacity);
    struct stack *s=makestack(capacity);

    printf("Enter data (positive):\n");
    scanf("%d",&data);

    while(data>=0)
    {
        push(s,data);
        if(isfull(s))
        {
            printf("stack is full:\n");
            break;
        }
        scanf("%d",&data);
    }
    printf("\n\n\npopping....\n");
    while(! isempty(s))
    {
        printf("%d ",pop(s));
    }
}

