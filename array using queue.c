#include<stdio.h>
#include<limits.h>
struct queue
{
    unsigned capacity;
    int front,rear,noe;
    int *array;
};
struct queue *makequeue (unsigned capacity)
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));

    q->capacity=capacity;
    q->front=0;
    q->rear=(q->capacity-1);
    q->noe=0;
    q->array=(int *)malloc(capacity *sizeof(int));



}
int isfull (struct queue *q)
{
    return(q->noe==q->capacity);
}
int isempty (struct queue *q)
{
    return(q->noe==0);
}
void enqueue(struct queue *q,int item)
{
    if(isfull (q))
    {
        printf("queue overflow:\n");
        return;
    }
    q->rear=(q->rear+1)%q->capacity;
    q->array[q->rear]=item;
    q->noe=q->noe+1;
}
int dequeue(struct queue *q)
{
    if(isempty (q))
    {
        printf("queue underflow:\n");
        return INT_MIN;
    }
    int item=q->array[q->front];
    q->front=(q->front+1)%q->capacity;
    q->noe=q->noe-1;
    return item;
}
int main()
{
    int capacity,data;
    printf("capacity:");
    scanf("%d",&capacity);
    struct queue *q=makequeue(capacity);

    printf("Enter data (positive):\n");
    scanf("%d",&data);
    while(data>=0)
    {
        enqueue(q,data);
        if(isfull (q))
        {
            printf("queue is full:\n");
            break;
        }
        scanf("%d",&data);

    }
    printf("\n\ndequeue......\n");
    while(! isempty (q))
    {
        printf("%d ",dequeue(q));
    }
}

