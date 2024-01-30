#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    int Emp_ID;
    float Salary;
    char Name[20];
};
int main()
{
    struct Employee emp[5];
    int i;
    printf("Enter details of all 5 Employees: \n");
    for(i = 0; i < 5; i++)
    {
        printf("Enter Employee%d name: ", i + 1);
        gets(emp[i].Name);
        printf("Enter Employee%d id: ", i + 1);
        scanf(" %d", &emp[i].Emp_ID);
        printf("Enter Employee%d Salary: ", i + 1);
        scanf(" %f", &emp[i].Salary);
        getchar();
    }
    for(i = 0; i < 5; i++)
    {
        if(emp[i].Salary > 10000)
        {
            printf("\nEmployee name: %s", emp[i].Name);
            printf("\nEmployee ID: %d", emp[i].Emp_ID);
            printf("\nEmployee Salary: %f", emp[i].Salary);
        }
    }
    return 0;
}
