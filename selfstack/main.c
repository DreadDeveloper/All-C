#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int stack[MAX], top = -1;
void insert()
{
    if(top == MAX - 1)
    {
        printf("\nOVERFLOW!");
        return;
    }
    else
    {
        int item;
        printf("\nEnter the value to inserted in the stack: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("\nValue inserted!");
    }
}
void del()
{
    if(top == -1)
    {
        printf("\nUNDERFLOW!");
        return;
    }
    else
    {
        int item;
        item = stack[top];
        top--;
        printf("\nThe value deleted is: %d", item);
    }
}
void display()
{
    if(top == -1)
    {
        printf("\nThe stack is empty!");
        return;
    }
    else
    {
        int i;
        printf("\nThe values are:-");
        for(i = top; i >= 0; i--)
        {
            printf("\nData %d is %d.", i + 1, stack[i]);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        system("cls");
        printf("\nChoose one of the following options:-\n");
        printf("1.Push into the stack.\n");
        printf("2.Pop from the stack.\n");
        printf("3.Display the stack.\n");
        printf("4.Exit.\n");
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
                printf("\nIncorrect choice!");
                getch();
                break;
        }
    }
    return 0;
}
