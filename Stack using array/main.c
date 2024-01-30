#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int stack [100], i, j, choice=0, n, top = -1;
void push()
{
    int val;
    if (top == n - 1)
        printf("\nOverflow.");
    else
    {
        printf("\nEnter the value: ");
        scanf("%d",&val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
        printf ("\nUnderflow.");
    else
        top = top - 1;
}
void show()
{
    if (top == -1)
        printf("\nEmpty stack.");
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    printf("Enter the number of elements :");
    scanf("%d", &n);
    while(1)
    {
        system("cls");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf ("%d", &choice);
        switch(choice)
        {
            case 1: push();
                    getch();
                    break;
            case 2: pop();
                    getch();
                    break ;
            case 3: show();
                    getch();
                    break;
            case 4: exit(0);
            default: printf("\nEnter valid choice.");
        }
    }
    return 0;
}
