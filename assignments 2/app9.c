#include <stdio.h>
int main()
{
    printf("Enter the number");
    int n;
    int factorial = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("the factorial of %d is %d", n, factorial);
}
