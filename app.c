// #include <stdio.h>
// int main()
// {
//     int workingHours;
//     printf("Enter the total working hours");
//     scanf("%d", workingHours);
//     printf("your working hours is %d", workingHours);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char fname[20], lname[20];

    printf("Enter your first name : ");
    scanf("%s", fname);

    printf("Enter your last name : ");
    scanf("%s", lname);

    printf("Your full name is %s %s", fname, lname);

    return 0;
}