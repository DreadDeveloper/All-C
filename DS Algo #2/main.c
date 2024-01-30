#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int front = -1, rear = -1;
int queue_array[MAX];
int item;
void insert()
{
    int item;
    printf("\nEnter the element\n");
    scanf("%d",&item);
    if(rear == MAX-1)
    {
        printf("\nThe queue is full.\n");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue_array[rear] = item;
    printf("\nThe value has been inserted.\n");
}
void del()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("\nThe queue is empty.\n");
        return;
    }
    else
    {
        item = queue_array[front];
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
        printf("\nThe value deleted is : %d", item);
    }
}
void display()
{
    int i;
    if(rear == -1)
    {
        printf("\nThe queue is empty.\n");
    }
    else
    {   printf("\nThe queue is:-\n");
        for(i = front; i <= rear; i++)
        {
            printf("%d\t", queue_array[i]);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n1. Insert element into queue.\n2. Delete element from queue.\n3. Display the queue.\n4. Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert(); break;
            case 2: del(); break;
            case 3: display(); break;
            case 4: exit(1);
            default: printf("\nWrong Choice.\n");
        }
    }
    return 0;
}
