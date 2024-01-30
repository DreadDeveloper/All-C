#include <stdio.h>
#include <stdlib.h>
void towerofhanoi(int num, char frompeg, char topeg, char auxpeg)
{
    if(num == 1)
    {
        printf("\nMove disk 1 from peg %c to peg %c.\n", frompeg, topeg);
        return;
    }
    towerofhanoi(num - 1, frompeg, auxpeg, topeg);
    printf("\nMove disk %d from peg %c to peg %c.\n", num, frompeg, topeg);
    towerofhanoi(num - 1, auxpeg, topeg, frompeg);
}
int main()
{
    int n;
    printf("\nEnter the number of disks: ");
    scanf("%d", &n);
    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}
