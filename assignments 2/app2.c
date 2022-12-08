#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("this is an even number");
    }
    else
    {
        printf("this is an odd number");
    }
    return 0;
}