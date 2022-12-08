#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);
    scanf("%d", &i);
    scanf("%d", &j);

    int sum = (a + b + c + d + e + f + g + h + i + j) / 10;

    printf("the average of the ten entered numbers is %d", sum);
    return 0;
}