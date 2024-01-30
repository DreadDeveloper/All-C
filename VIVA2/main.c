#include <stdio.h>
#include <stdlib.h>
float average(int arr[], int num)
{
    float avg = 0;
    int i;
    for(i = 0; i < num; i++)
    {
        avg = avg + arr[i];
    }
    return (avg/num);
}
int main()
{
    //Create a function average which will take an integer as a parameter and another integer number as parameter which will mention the size of the array.
    int ar[20], n, i;
    printf("Enter the size of the array(Less than 20): ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("The average of the array is : %.2f", average(ar, n));
    return 0;
}
