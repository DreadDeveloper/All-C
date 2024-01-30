/*#include<stdio.h>

void display(int result[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
}

void maxi_row(int mat[][3], int m, int n)
{
    int i = 0, j;
    int max = 0;
    int result[m];
    while (i < m)
    {
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
            }
        }
        result[i] = max;
        max = 0;
        i++;

    }
    display(result, m);
}
int main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    int i, j;
    int mat1[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&mat1[i][j]);
    }

    maxi_row(mat1,m,n);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int arr[100][100], i, j, m, n, max = 0, high[100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements in the matrix: ");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The given array is:-\n");
    for(i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        high[i] = max;
        max = 0;
    }
    printf("The highest elements of each row are:- \n");
    for(i = 0; i < m; i++)
    {
        printf("%d\n", high[i]);
    }
    return 0;
}
