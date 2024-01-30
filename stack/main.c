#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int stack[MAX], i, j, choice, n, top = -1;
void push()
{
    int val;
    if(top == MAX - 1)
    {
        printf("\nOVERFLOW.");
        return;
    }
    else
    {
        printf("\nEnter the value: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
        printf("\nValue inserted.");
    }
}
void pop()
{
    if(top == -1)
    {
        printf("\nUNDERFLOW.");
        return;
    }
    else
    {
        top = top - 1;
        printf("\nValue deleted.");
    }
}
void show()
{
    if(top == -1)
    {
        printf("Stack is empty.");
        return;
    }
    for(i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
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
                show();
                getch();
                break;
            case 4:
                exit(0);
            default:
                printf("Please Enter valid choice ");
                getch();
        }
    }
    return 0;
}
