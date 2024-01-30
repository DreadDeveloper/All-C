#include <stdio.h>
#include <stdlib.h>
int factorial(int val)
{
    int i, sum = 1;
    for(i = 2; i <= val; i++)
    {
        sum = sum * i;
    }
    return sum;
}
int main()
{
    //Factorial Function Program
    int a;
    printf("Enter an integer whose factorial needs to be calculated: ");
    scanf("%d", &a);
    printf("The factorial is : %d.", factorial(a));
    return 0;
}

