#include <stdio.h>
int main()
{
    int userID;
    printf("Enter your user id");
    scanf("%d", &userID);
    if (userID == 1234)
    {
        printf("you are Harry");
    }
    else if (userID == 5678)
    {
        printf("you are Ron");
    }
    else if (userID == 1145)
    {
        printf("you are Hermione");
    }
    else
    {
        printf("Invalid Id");
    }
    return 0;
}