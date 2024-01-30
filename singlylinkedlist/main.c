#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
void traverse()
{
    struct node *temp;
    if(start == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    else
    {
        temp = start;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->info);
            temp = temp -> link;
        }
    }
}
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("\nOVERFLOW.\n");
        return;
    }
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp -> info = data;
    temp -> link = start;
    start = temp;
    printf("\nNode inserted.");
}
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("\nOVERFLOW.\n");
        return;
    }
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp -> link = NULL;
    temp -> info = data;
    head = start;
    while (head -> link != NULL)
    {
        head = head -> link;
    }
    head -> link = temp;
    printf("\nNode inserted.");
}
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
    temp = start;
    newnode -> info = data;
    newnode -> link = NULL;
    while (i < pos - 1)
    {
        temp = temp -> link;
        if(temp == NULL)
        {
            printf("\nGiven location is out of bounds of the list.\n");
            return;
        }
        i++;
    }
    newnode -> link = temp -> link;
    temp -> link = newnode;
    printf("\nNode inserted.");
}
void deleteFirst()
{
    struct node *temp;
    if(start == NULL)
    {
        printf("\nUNDERFLOW.\n");
        return;
    }
    else
    {
        temp = start;
        start = start -> link;
        free(temp);
        printf("\nNode deleted.");
    }
}
void deleteEnd()
{
    struct node *temp, *prevnode;
    if(start == NULL)
    {
        printf("\nUNDERFLOW.\n");
        return;
    }
    else
    {
        temp = start;
        while (temp -> link != NULL)
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        printf("\nNode deleted.");
        prevnode -> link = NULL;
    }
}
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
    if(start == NULL)
    {
        printf("\nUNDERFLOW.\n");
        return;
    }
    else
    {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1)
        {
            temp = temp -> link;
            i++;
        }
        position = temp -> link;
        temp -> link = position -> link;
        free(position);
        printf("\nNode deleted.");
    }
}
void maximum()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    else
    {
        temp = start;
        int max = temp -> info;
        while (temp != NULL)
        {
            if (max < temp -> info)
                max = temp -> info;
            temp = temp -> link;
        }
        printf("\nMaximum number is : %d ", max);
    }
}
void mean()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    else
    {
        temp = start;
        int sum = 0, count = 0;
        float m;
        while (temp != NULL)
        {
            sum = sum + temp -> info;
            temp = temp -> link;
            count++;
        }
        m = sum / count;
        printf("\nMean is %f ", m);
    }
}
void sort()
{
    struct node *current = start;
    struct node *index = NULL;
    int temp;
    if (start == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current -> link;
            while (index != NULL)
            {
                if (current -> info > index -> info)
                {
                    temp = current -> info;
                    current -> info = index -> info;
                    index -> info = temp;
                }
                index = index -> link;
            }
            current = current -> link;
        }
    }
}
void reverseLL()
{
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;
    if (start == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    else
    {
        while (start != NULL)
        {
            t2 = start -> link;
            start -> link = t1;
            t1 = start;
            start = t2;
        }
        start = t1;
        temp = start;
        printf("Reversed linked list is : ");
        while (temp != NULL)
        {
            printf("%d ", temp -> info);
            temp = temp -> link;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\n1.Display the list\n");
        printf("2.For insertion at starting\n");
        printf("3.For insertion at end\n");
        printf("4.For insertion at any position\n");
        printf("5.For deletion of first element\n");
        printf("6.For deletion of last element\n");
        printf("7.For deletion of element at any position\n");
        printf("8.To find maximum among"" the elements\n");
        printf("9.To find mean of the elements\n");
        printf("10.To sort element\n");
        printf("11.To reverse the linked list\n");
        printf("12.To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                traverse();
                getch();
                break;
            case 2:
                insertAtFront();
                getch();
                break;
            case 3:
                insertAtEnd();
                getch();
                break;
            case 4:
                insertAtPosition();
                getch();
                break;
            case 5:
                deleteFirst();
                getch();
                break;
            case 6:
                deleteEnd();
                getch();
                break;
            case 7:
                deletePosition();
                getch();
                break;
            case 8:
                maximum();
                getch();
                break;
            case 9:
                mean();
                getch();
                break;
            case 10:
                sort();
                getch();
                break;
            case 11:
                reverseLL();
                getch();
                break;
            case 12:
                exit(1);
                break;
            default:
                printf("Incorrect Choice.\n");
                getch();
        }
    }
    return 0;
}
