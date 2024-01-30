#include <stdio.h>
#include <stdlib.h>
//wap to declare 2 arrays of different size. print the third array and display in ascending order.
int main()
{
    int arr1[100], arr2[100], arr3[200], n1, n2, i, j, temp, n;
    printf("How many elements you want in the first array?: ");
    scanf("%d", &n1);
    printf("Enter the first array elements:-\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("How many elements you want in the second array?: ");
    scanf("%d", &n2);
    printf("Enter the second array elements:-\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n1 + n2; i++)
    {
        if(i < n1)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i - n1];
        }
    }
    n = n1 + n2;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr3[j] < arr3[j + 1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    printf("The merged array in ascending order is: ");
    for(i = 0; i < n1+n2; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
