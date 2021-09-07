#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;  //front
    int r;  //rear
    int *arr;
};

int isFull(struct queue *q){

    if(q->r == q->size -1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q){

    if(q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue (struct queue *q , int val)
{
    if(isFull(q))
    {
        printf("Queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;

    }
}

int dequeue (struct queue *q )
{
    if(isEmpty(q))
    {
        printf("Queue is empty");
    }
    else
    {   
        q->f++;
        printf("Element Dequeued ");
        return q->arr[q->f];
    }

}
int peek(struct queue *q)
{
    if(isFull(q) ||isEmpty(q))
    {
        printf("Invalid");
    }
    return q->arr[q->r];
}

int main()
{
    

    struct queue *q;

    q->size = 100;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*(sizeof(int)));

 

    enqueue(q,100);
    enqueue(q,40);
    enqueue(q,12);
    enqueue(q,1);

    printf("Element : %d\n",dequeue(q));

    printf("Head : %d",peek(q));
}
