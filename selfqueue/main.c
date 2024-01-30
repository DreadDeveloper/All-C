#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int front = -1, rear = -1, queue[MAX];
void insert()
{
    if(rear == MAX - 1)
    {
        printf("\nOVERFLOW!");
        return;
    }
    else
    {
        int item;
        printf("\nEnter the value to be inserted in the queue: ");
        scanf("%d", &item);
        if(front == - 1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = item;
            printf("\nValue inserted!");
        }
        else
        {
            rear++;
            queue[rear] = item;
            printf("\nValue inserted!");
        }
    }
}
void del()
{
    if(front == -1 || front > rear)
    {
        printf("\nUNDERFLOW!");
        return;
    }
    else
    {
        if(front == rear)
        {
            printf("\nThe deleted value is: %d.", queue[front]);
            front = rear = -1;
        }
        else
        {
            printf("\nThe deleted value is: %d.", queue[front]);
            front++;
        }
    }
}
void display()
{
    if(front == -1)
    {
        printf("\nEmpty queue!");
        return;
    }
    else
    {
        int i;
        printf("\nThe values are:-\n");
        for(i = front; i <= rear; i++)
        {
            printf("Data %d: %d ", i + 1, queue[i]);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\nChoose one of the options below:-\n");
        printf("1.Insert into queue.\n2.Delete from queue.\n3.Display the queue.\n4.Exit.\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insert();
                getch();
                break;
            case 2:
                del();
                getch();
                break;
            case 3:
                display();
                getch();
                break;
            case 4:
                exit(0);
                getch();
            default:
                printf("\nIncorrect choice!");
                break;
        }
    }
    return 0;
}
