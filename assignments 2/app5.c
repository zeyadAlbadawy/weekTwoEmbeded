#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirdNum;
    printf("Enter three numbers: \na: ");
    scanf("%d", &firstNum);
    printf("b: ");
    scanf("%d", &secondNum);
    printf("c: ");
    scanf("%d", &thirdNum);
    if (firstNum > secondNum && firstNum > thirdNum)
        printf("Biggest number is %d", firstNum);
    if (secondNum > firstNum && secondNum > thirdNum)
        printf("Biggest number is %d", secondNum);
    if (thirdNum > firstNum && thirdNum > secondNum)
        printf("Biggest number is %d", thirdNum);
    return 0;
}