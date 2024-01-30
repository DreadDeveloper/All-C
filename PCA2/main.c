#include <stdio.h>
int main()
{
    int i, j, temp;
    int arr[10];
    printf("Enter 10 integers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i < 10; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("\nSorted list in ascending order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
