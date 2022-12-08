#include <stdio.h>
int main()
{
    int ID, password;
    printf("Please enter your ID \n");
    scanf("%d", &ID);
    if (ID == 12345)
    {
        printf("Enter the password \n");
        scanf("%d", &password);
        if (password == 789)
        {
            printf("Welcome !");
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                printf("you are not registerd enter ur password again !!!  : \n");
                scanf("%d", &password);
                if (password == 789)
                {
                    printf("Welcome");
                    break;
                }
            }
        }
    }
}
