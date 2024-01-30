#include <stdio.h>
#include <stdlib.h>
//Question Number 3 Function
/*int addnum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++)
        {
		total += *(ptr + index);
	}
	return(total);
}*/
int main()
{
    //Question Number 1
    /*int arr[10], i, sum = 0;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of the array is: %d", sum);
    printf("\nAverage of the array is: %.2f", (float)sum/10);*/
    //Question Number 2
    /*int array[10], i, sum = 0;
    int *ptr;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    ptr = array;
    for(i = 0; i < 10; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("The sum of the elements is: %d", sum);*/
    //Question Number 3
    /*int array[5], i;
	printf("Enter 5 integers:-\n");
	for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Sum of all array elements = %d\n", addnum(array));*/
    //Question Number 4
    /*int arr[10], i, b[10] = {-32768}, m = 0, j = 0;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i< 10; i++)
    {
        if(arr[i]%2 != 0)
        {
            m += arr[i];
        }
        if(arr[i]%2 == 0)
        {
            b[j] = m;
            m = -32768;
            j++;
        }
        if(i == 9)
        {
            b[j] = m;
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    m = b[0];
    for(i = 1; i < 10; i++)
    {
        if(b[i] > m)
        {
            m = b[i];
        }
    }
    printf("\nThe largest sum of contiguous sub array of odd numbers: %d", m);*/
    //Question Number 5
    /*int arr[10], i, aeven[10], aodd[10], j = 0, k = 0;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(arr[i]%2 == 0)
        {
            aeven[j] = arr[i];
            j++;
        }
        else
        {
            aodd[k] = arr[i];
            k++;
        }
    }
    printf("The even number array: ");
    for(i = 0; i < j; i++)
    {
        printf("%d ", aeven[i]);
    }
    printf("\nThe odd number array: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", aodd[i]);
    }*/
    //Question Number 6
    /*int arr[20] = {0}, i, pos, ins;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &ins);
    printf("Enter the position it needs to be inserted: ");
    scanf("%d", &pos);
    for(i = 10; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ins;
    printf("The updated array is: ");
    for(i = 0; i <= 10; i++)
    {
        printf("%d ", arr[i]);
    }*/
    //Question Number 7
    int arr[10], i, pos;
    printf("Enter 10 integers:-\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position when you need to delete the element: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("The updated array is: ");
    for(i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
