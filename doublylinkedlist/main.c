#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;
void insertionbeginning()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW.");
    }
    else
    {
        int item;
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        if(head == NULL)
        {
            newnode -> next = NULL;
            newnode -> prev = NULL;
            newnode -> data = item;
            head = newnode;
            printf("\nValue inserted.");
        }
        else
        {
            newnode -> next = head;
            head -> prev = newnode;
            newnode -> prev = NULL;
            newnode -> data = item;
            head = newnode;
            printf("\nValue inserted.");
        }
    }
}
void insertionend()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW.");
    }
    else if(head == NULL)
    {
        int item;
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        newnode -> next = NULL;
        newnode -> prev = NULL;
        newnode -> data = item;
        head = newnode;
        printf("\nValue inserted.");
    }
    else if(head -> next == NULL)
    {
        int item;
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        head -> next = newnode;
        newnode -> prev = head;
        newnode -> next = NULL;
        newnode -> data = item;
        printf("\nValue inserted.");
    }
    else
    {
        struct node *temp;
        int item;
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        temp -> next = newnode;
        newnode -> prev = temp;
        newnode -> next = NULL;
        newnode -> data = item;
        printf("\nValue inserted.");
    }
}
void specifiedinsertion()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW.");
    }
    else
    {
        int item, location;
        struct node *temp;
        temp = head;
        printf("\nEnter the location where the value is to be inserted: ");
        scanf("%d", &location);
        for(int i = 0; i < location; i++)
        {
            if(temp == NULL)
            {
                printf("\nThe given location is out of bounds of the list.");
                return;
            }
            temp = temp -> next;
        }
        printf("\nEnter the value that needs to be inserted: ");
        scanf("%d", &item);
        newnode -> data = item;
        newnode -> next = temp -> next;
        newnode -> prev = temp;
        temp -> next = newnode;
        temp -> next -> prev = newnode;
        printf("\nValue inserted.");
    }
}
void deletionbeginning()
{
    if(head == NULL)
    {
        printf("\nUNDERFLOW.");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted.");
    }
    else
    {
        struct node *temp;
        temp = head;
        head = head -> next;
        head -> prev = NULL;
        free(temp);
        printf("\nNode deleted.");
    }
}
void deletionend()
{
    if(head == NULL)
    {
        printf("\nUNDERFLOW.");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted.");
    }
    else
    {
        struct node *temp;
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> prev -> next = NULL;
        free(temp);
        printf("\nNode deleted.");
    }
}
void specifieddeletion()
{
    if(head == NULL)
    {
        printf("\nUNDERFLOW.");
    }
    else
    {
        int location;
        struct node *ptr;
        ptr = head;
        printf("\nEnter the location where the value is to be deleted: ");
        scanf("%d", &location);
        for(int i = 0; i < location; i++)
        {
            if(ptr == NULL)
            {
                printf("\nThe given location is out of bounds of the list.");
            }
            ptr = ptr -> next;
        }
        if(ptr -> next == NULL)
        {
            ptr -> prev -> next = NULL;
            free(ptr);
            printf("\nValue deleted.");
        }
        else if(ptr -> next -> next == NULL)
        {
            ptr -> next = NULL;
            free(ptr);
            printf("\nValue deleted.");
        }
        else
        {
            ptr -> next -> prev = ptr -> prev;
            ptr -> prev -> next = ptr -> next;
            free(ptr);
            printf("\nValue deleted.");
        }
    }
}
void display()
{
    if(head == NULL)
    {
        printf("\nEmpty list.");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        printf("\n");
        while(ptr != NULL)
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n1.Insertion at beginning\n2.Insertion at end\n3.Insertion at specified location\n4.Deletion from beginning\n5.Deletion from end\n6.Delete from specified location\n7.Search\n8.Display\n9.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insertionbeginning();
                    getch();
                    break;
            case 2: insertionend();
                    getch();
                    break;
            case 3: specifiedinsertion();
                    getch();
                    break;
            case 4: deletionbeginning();
                    getch();
                    break;
            case 5: deletionend();
                    getch();
                    break;
            case 6: specifieddeletion();
                    getch();
                    break;
            case 7: insertionbeginning();
                    getch();
                    break;
            case 8: display();
                    getch();
                    break;
            case 9: exit(0);
            default: printf("\nInvalid input."); getch();
        }
    }
    return 0;
}
