#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *link;
};
struct node *head;
void insertbeginning()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW!");
        return;
    }
    else
    {
        int item;
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        if(head == NULL)
        {
            head -> data = item;
        }
        else
        {
            newnode = head;
            newnode -> data = item;
            newnode -> link = head;
            head = newnode;
        }
    }
}
void insertend()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW!");
        return;
    }
    else
    {
        int item;
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        if(head == NULL)
        {
            head -> data = item;
        }
        else if(head -> link == NULL)
        {
            newnode -> data = item;
            newnode -> link = NULL;
            head -> link = newnode;
        }
        else
        {
            struct node *temp;
            temp = head;
            newnode -> data = item;
            newnode -> link = NULL;
            while(temp -> link != NULL)
            {
                temp = temp -> link;
            }
            temp -> link = newnode;
        }
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
