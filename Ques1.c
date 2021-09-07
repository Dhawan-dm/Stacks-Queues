#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *s)
{
    if(s->top == s->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stack *s)
{
    if(s->top == -1)
    {
        return 1;

    }
    return 0;
}

void push(struct stack *s ,int val)
{
    if(isFull(s))
    {
        printf("stack Overflow");

    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}
int pop (struct stack *s)
{
    if(isEmpty(s))
    {
        printf("stack UnderFlow");
    }
    else{
        int val = s->arr[s->top];
        s->top --;
        printf("Element removed from the stack is : ");
        return val;
    }
}
int peek(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("stack UnderFlow");

    }
    else
    {
        return s->arr[s->top];
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    

    s->size = n;
    s->top = -1;
    s->arr = (int*)malloc(s->size*(sizeof(int)));

     int val;
    for (int i = 0; i < s->size; i++)
    {
       
        scanf("%d",&val);
        push(s,val);
    }
    

    

    printf("%d\n",pop(s));
    printf("%d",peek(s));


}
