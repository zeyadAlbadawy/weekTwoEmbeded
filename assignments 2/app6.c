#include <stdio.h>
int main()
{
    int result;
    printf("Enter the result of 3 * 4 \n");
    scanf("%d", &result);
    do
    {
        if (result == 12)
        {
            printf("Thanks");
        }
    } while (result != 12);
}