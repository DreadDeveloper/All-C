#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void push();
void pop();
void display();
struct node
{
    int val;
    struct node *next;
};
struct node *head;
int main()
{
    int choice=0;
    while(1)
    {
        system("cls");
        printf("\n1.Push into stack\n2.Pop from stack\n3.Display the stack\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
                getch();
                break;
            case 2:
                pop();
                getch();
                break;
            case 3:
                display();
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("\nIncorrect choice.");
                getch();
        }
    }
    return 0;
}
void push()
{
    int val;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW.");
        return;
    }
    else
    {
        printf("\nEnter the value: ");
        scanf("%d",&val);
        if(head == NULL)
        {
            ptr -> val = val;
            ptr -> next = NULL;
            head=ptr;
        }
        else
        {
            ptr -> val = val;
            ptr -> next = head;
            head = ptr;

        }
        printf("Item pushed.");

    }
}

void pop()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nUNDERFLOW.");
        return;
    }
    else
    {
        ptr = head;
        head = head -> next;
        free(ptr);
        printf("Item popped.");

    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("\nData = %d", ptr -> val);
            ptr = ptr -> next;
        }
    }
}
