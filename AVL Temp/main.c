#include<stdio.h>
struct date
{
    int day;
    int month;
    long int year;
};
struct date input(struct date*);
int validate(struct date);
int main()
{
    struct date c;
    int b;
    printf("Enter the date:\n");
    input(&c);
    b=validate(c);
    if(b==1)
    {
        printf("Date is valid");
    }
    else
    {
        printf("Please enter a valid date");
    }
}
struct date input(struct date*a)
{
    struct date i;
    scanf("%d %d %ld",&i.day,&i.month,&i.year);
    *a=i;
}
int validate(struct date j)
{
   if((j.year%4 == 0) && ((j.year%400 == 0) || (j.year%100 != 0)))
   {
       if(j.month==2&&0<j.day<30)
       {
           return(1);
       }
       else if(j.month==1||j.month==3||j.month==5||j.month==7||j.month==8||j.month==10||j.month==12&&0<j.day<32)
       {
           return(1);
       }
       else if(j.month=4||j.month==6||j.month==9||j.month==1&&0<j.day<31)
       {
           return(1);
       }
       else
       {
           return(0);
       }
   }
   else if(j.month==2&&0<j.day<29)
   {
       return(1);
   }
   else if(j.month==1||j.month==3||j.month==5||j.month==7||j.month==8||j.month==10||j.month==12&&0<j.day<32)
   {
       return(1);
   }
   else if(j.month=4||j.month==6||j.month==9||j.month==1&&0<j.day<31)
   {
       return(1);
   }
   else
   {
       return(0);
   }
}
