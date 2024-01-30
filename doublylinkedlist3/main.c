#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;
void traverse()
{
	if(start == NULL)
    {
		printf("\nList is empty.\n");
		return;
	}
	struct node* temp;
	temp = start;
	while(temp != NULL)
    {
		printf("Data = %d\n", temp -> info);
		temp = temp -> next;
	}
}
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
    {
        printf("\nOVERFLOW.");
        return;
    }
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp -> info = data;
	temp -> prev = NULL;
	temp -> next = start;
	start = temp;
	printf("\nNode inserted.");
}
void insertAtEnd()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
    {
        printf("\nOVERFLOW.");
        return;
    }
	temp -> prev = NULL;
	temp -> next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp -> info = data;
	temp -> next = NULL;
	trav = start;
	if(start == NULL)
    {

		start = temp;
        printf("\nNode inserted.");
	}
	else
    {
		while(trav -> next != NULL)
			trav = trav -> next;
		temp -> prev = trav;
		trav -> next = temp;
        printf("\nNode inserted.");
	}
}
void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode -> next = NULL;
	newnode -> prev = NULL;
	printf("\nEnter position : ");
	scanf("%d", &pos);
	if(start == NULL)
    {
		start = newnode;
		newnode -> prev = NULL;
		newnode -> next = NULL;
        printf("\nNode inserted.");
	}
	else if(pos == 0)
    {
        insertAtFront();
        return;
	}
	else{
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newnode -> info = data;
	temp = start;
		while(i < pos - 1)
		{
			temp = temp -> next;
			if(temp == NULL)
            {
                printf("\nThe given location is out of bounds of the list.");
                return;
            }
			i++;
		}
		newnode -> next = temp -> next;
		newnode -> prev = temp;
		temp -> next = newnode;
		temp -> next -> prev = newnode;
        printf("\nNode inserted.");
	}
}
void deleteFirst()
{
	struct node* temp;
	if(start == NULL)
    {
		printf("\nUNDERFLOW.\n");
		return;
    }
	else
    {
		temp = start;
		start = start -> next;
		if(start != NULL)
			start -> prev = NULL;
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
	temp = start;
	while(temp -> next != NULL)
    {
        prevnode = temp;
		temp = temp->next;
    }
	if(start -> next == NULL)
    {
		start = NULL;
		free(start);
        printf("\nNode deleted.");
    }
	else
    {
		prevnode -> next = NULL;
		free(temp);
        printf("\nNode deleted.");
	}
}
void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;
	if(start == NULL)
    {
		printf("\nUNDERFLOW.\n");
		return;
    }
	else
    {
		printf("\nEnter position : ");
		scanf("%d", &pos);
		if(pos == 0)
		{
			if(start != NULL)
            {
				start -> prev = NULL;
			}
			printf("\nNode deleted.");
			return;
		}
		while(i < pos - 1)
		{
			temp = temp -> next;
			if(temp == NULL)
            {
                printf("\nThe given location is out of bounds of the list.");
                return;
            }
			i++;
		}
		position = temp -> next;
		if(position -> next != NULL)
			position -> next -> prev = temp;
		temp -> next = position -> next;
		free(position);
        printf("\nNode deleted.");
	}
}
int main()
{
	int choice;
	while(1)
    {
        system("cls");
        printf("\n1 For insertion at starting\n");
		printf("2 For insertion at end\n");
		printf("3 For insertion at any position\n");
		printf("4 For deletion of first element\n");
		printf("5 For deletion of last element\n");
		printf("6 For deletion of element at any position\n");
        printf("7. To see list\n");
		printf("8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		switch (choice){
		case 1:
			insertAtFront();
			getch();
			break;
		case 2:
			insertAtEnd();
			getch();
			break;
		case 3:
			insertAtPosition();
			getch();
			break;
		case 4:
			deleteFirst();
			getch();
			break;
		case 5:
			deleteEnd();
			getch();
			break;
		case 6:
			deletePosition();
			getch();
			break;
		case 7:
			traverse();
			getch();
			break;
		case 8:
			exit(0);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			getch();
			continue;
		}
	}
	return 0;
}
