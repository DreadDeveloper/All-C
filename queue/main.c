#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define maxsize 5
int front = -1, rear = -1;
int queue[maxsize];
void insert()
{
    int item;
    printf("\nEnter the element: ");
    scanf("%d", &item);
    if(rear == maxsize - 1)
    {
        printf("\nOVERFLOW.");
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
    queue[rear] = item;
    printf("\nValue inserted.");

}
void del()
{
    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW.");
        return;
    }
    else
    {
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
        printf("\nValue deleted.");
    }
}

void display()
{
    int i;
    if(rear == -1)
    {
        printf("\nEmpty queue.\n");
    }
    else
    {
        printf("\n");
        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main ()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice: ");
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
            break;
        default:
            printf("\nIncorrect input.\n");
            getch();
        }
    }
    return 0;
}
