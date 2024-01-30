#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
# define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue()
{
    int element;
    printf("\nEnter the value: ");
    scanf("%d", &element);
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
        printf("\nValue added.");
    }
    else if((rear + 1) % max == front)
    {
        printf("\nOVERFLOW.");
    }
    else
    {
        rear = (rear + 1)%max;
        queue[rear] = element;
        printf("\nValue added.");
    }
}
void dequeue()
{
    if((front == -1) && (rear == -1))
    {
        printf("\nUNDERFLOW.");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
        printf("\nValue deleted.");
    }
    else
    {
        front = (front + 1) % max;
        printf("\nValue deleted.");
    }
}
void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\n");
        while(i <= rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % max;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n1.Insert an element");
        printf("\n2.Delete an element");
        printf("\n3.Display the queue");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
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
                printf("\nIncorrect input.");
                getch();
        }
    }
    return 0;
}
