#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1;
int stack_array[MAX];
int item;
void push()
{
    int item;
    if(top == MAX-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push: ");
        scanf("%d", &item);
        top = top + 1;
        stack_array[top] = item;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty!!\n");
    }
    else
    {
        printf("\nDeleted element is %d\n", stack_array[top]);
        top = top - 1;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("\nStack is empty!!\n");
    }
    else
    {
        printf("\nStack is:-\n");
        for(i = top; i >= 0; --i)
        {
            printf("%d\n", stack_array[i]);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1. Push element into stack.\n2. Pop element from stack.\n3. Display the stack.\n4.Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(1);
            default: printf("\nWrong Choice.\n");
        }
    }
    return 0;
}
