#include <stdio.h>
#include <stdlib.h>
void insertion(int arr[], int size)
{
    int i, j, key;
    for(i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[100], size, i;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    printf("\nEnter the elements of the array:-\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion(arr, size);
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
