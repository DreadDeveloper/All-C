/*#include <stdio.h>
#include <stdlib.h>
int min3(int x, int y, int z)
{
    int minimum;
    if(x < y && x < z)
    {
        minimum = x;
    }
    else
    {
        if(y < z)
        {
            minimum = y;
        }
        else
        {
            minimum = z;
        }
    }
    return minimum;
}
int main()
{
    int n1, n2, n3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("The smallest of the three integers is : %d", min3(n1, n2, n3));
    return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
   if(n == 0)
   {
      return(1);
   }
   return(n * factorial(n - 1));
}
int main()
{
   int num;
   printf("Enter any integer number: ");
   scanf("%d", &num);
   printf("Factorial of %d is: %d", num, factorial(num));
   return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
struct Furniture
{
    int Id;
    float Price;
    char Type;
};
int main()
{
    struct Furniture furn[10];
    int i;
    printf("Enter details of all 10 furnitures: \n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter furniture %d type(P for plastic, W for wooden): ", i + 1);
        scanf(" %c", &furn[i].Type);
        printf("Enter furniture %d id: ", i + 1);
        scanf(" %d", &furn[i].Id);
        printf("Enter furniture %d price: ", i + 1);
        scanf(" %f", &furn[i].Price);
        printf("\n");
    }
    for(i = 0; i < 10; i++)
    {
        if(furn[i].Type == 'P')
        {
            printf("\nFurniture ID: %d", furn[i].Id);
            printf("\nFurniture Price: %f", furn[i].Price);
        }
    }
    return 0;
}
