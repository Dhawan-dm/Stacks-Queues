#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *t = NULL;

void push(int n)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = t;
    t = ptr;
}
void pop()
{
    if (t == NULL)
    {
        printf("\n\nStack is empty ");
    }
    else
    {
        struct node *temp;
        temp = t;
        t = t->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
void peek()
{
    struct node *temp;
    temp = t;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n, x;
    while (x != 0)
    {	
	printf("Enter 1 to push\nEnter 2 to pop\nEnter 3 to peek\n");    
        scanf("%d", &x);
        
        switch (x)
        {
            case 1:
                printf("\nEnter number "); //enter number that is needed to be pushed
                scanf("%d", &n);
                push(n);
                break;
            case 2:      //to delete
                pop();
                printf("\nPopped\n ");
                break;
            case 3:      // to display the list
                printf("\nAll elements\n ");
                peek(); 
		printf("\n");
                break;
        }
    }
}






