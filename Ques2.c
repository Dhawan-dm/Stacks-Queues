#include <stdio.h>
#include<stdlib.h>
#define MAX 50

int end = - 1;
int start = - 1;
int a[MAX];

void insert()
{
    int elem;
    
    if(end == MAX - 1)
        printf("Queue Overflow \n");
        
    else
    {
        if(start== - 1)
            start = 0;
            
        printf("Enter element: ");
        scanf("%d", &elem);
        
        end = end + 1;
        
        a[end] = elem;
    }
}
void delete()
{
    if(start == - 1 || start > end)
    {
        printf("Queue Underflow \n");
        
        return;
    }
    else
    {
        printf("Deleted element : %d\n", a[end]);
        
        start = start + 1;
    }
}
void display()
{
    int i;
    
    if(start == - 1)
        printf("Queue is empty \n");
        
    else
    {
        printf("Queue is : \n");
        
        for(i = start; i <= end; i++)
        {
            printf("%d ", a[i]);
        
        }    

    printf("\n");
        
    }
}




int main()
{   
    
    int x;
    while (1)
    {
        printf("1.Insert element to queue \n");
        
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        
        printf("4.Quit \n");

        scanf("%d", &x);
        switch(x)
        {
                case 1:
                insert();
                break;
                
                case 2:
                delete();
                break;
                
                case 3:
                display();
                break;
                
                case 4:
                exit(1);
                default:
            
            printf("Wrong choice \n");
        }
    }
}
