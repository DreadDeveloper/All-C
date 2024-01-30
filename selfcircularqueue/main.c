#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int front = -1, rear = -1, queue[MAX];
void enqueue()
{
    if((rear + 1) % MAX == front)
    {
        printf("\nOVERFLOW!");
        return;
    }
    else
    {
        int item;
        printf("Enter the value to be inserted into the queue: ");
        scanf("%d", &item);
        if(front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = item;
            printf("\nValue inserted!");
        }
        else
        {
            rear = (rear + 1) % MAX;
            queue[rear] = item;
            printf("\nValue inserted!");
        }
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
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
            front = (front + 1) % MAX;
        }
    }
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("\nEmpty queue.");
        return;
    }
    else
    {
        int i = front;
        printf("\n");
        while(i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d ", queue[i]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\nChoose one of the following options:-\n");
        printf("1.Insert into queue\n2.Delete from queue\n3.Display the queue\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                enqueue();
                getch();
                break;
            case 2:
                dequeue();
                getch();
                break;
            case 3:
                display();
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("\nIncorrect choice!");
        }
    }
    return 0;
}
