#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1, n2, n3, big, sum;
    printf("Enter the length of the first side of the triangle:- \n");
    scanf("%d", &n1);
    printf("Enter the length of the second side of the triangle:- \n");
    scanf("%d", &n2);
    printf("Enter the length of the third side of the triangle:- \n");
    scanf("%d", &n3);
    if(n1 > n2 && n1 > n3)
    {
        big = n1;
        sum = n2 + n3;
    }
    else
    {
        if(n2 > n3)
        {
            big = n2;
            sum = n1 + n3;
        }
        else
        {
            big = n3;
            sum = n1 + n2;
        }
    }
    if(sum > big)
    {
        printf("The given dimensions can form a triangle.");
    }
    else
    {
        printf("The given dimensions cannot form a triangle.");
    }
    return 0;
}
