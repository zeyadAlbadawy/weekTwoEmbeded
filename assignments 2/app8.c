#include <stdio.h>
int main()
{
    int n;
    printf("Enter the wanted table from 1 to 12 \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            printf("%d x %d = %d \n", i, j, i * j);
        }
    }
}