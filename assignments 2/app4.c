#include <stdio.h>
int main()
{
    int grade;
    printf("Enter the grade");
    scanf("%d", &grade);
    if (grade > 85)
    {
        printf("Excellent");
    }
    else if (grade > 75)
    {
        printf("Very good");
    }
    else if (grade > 60)
    {
        printf("good");
    }
    else if (grade > 50)
    {
        printf("approximately passed");
    }
    else
    {
        printf("failed");
    }
    return 0;
}