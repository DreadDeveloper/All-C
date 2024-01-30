/*
//Factorial using recursion
#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
int main()
{
    int num;
    int result;
    printf("Enter a number to find it's factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
*/
/*
//Merge Sort
#include<stdio.h>
void merge(int a[], int i1, int j1, int i2, int j2)
{
    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;
    while(i <= j1 && j<=j2)
    {
        if(a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while(i <= j1)
    {
        temp[k++] = a[i++];
    }
    while(j <= j2)
    {
        temp[k++] = a[j++];
    }
    for(i = i1, j=0; i<=j2; i++, j++)
    {
        a[i] = temp[j];
    }
}
void mergesort(int a[], int i, int j)
{
    int mid;
    if(i < j)
    {
        mid =(i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid+1, j);
        merge(a, i, mid, mid+1, j);
    }
}
int main()
{
    int a[30], n, i;
    printf("Enter no of elements:");
    scanf("%d", &n);
    printf("Enter array elements:-\n");
    for(i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n-1);
    printf("\nSorted array is :");
    for(i=0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
*/

//Single Linked List
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
void createList(int n);
void displayList();
int main()
{
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list:- \n");
    displayList();
    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

