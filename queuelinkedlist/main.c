#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void del();
void display();
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n1.Insert into queue\n2.Delete from queue\n3.Display the queue\n4.Exit\n");
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
                break;
            default:
                printf("\nIncorrect choice.\n");
                getch();
        }
    }
    return 0;
}
void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("\nEnter value: \n");
        scanf("%d", &item);
        ptr -> data = item;
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
        printf("\nValue inserted.");
    }
}
void del()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
        printf("\nValue deleted.");
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("\nEmpty queue.\n");
    }
    else
    {
        printf("\n");
        while(ptr != NULL)
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
    }
}
