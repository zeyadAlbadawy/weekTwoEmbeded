#include <stdio.h>
int main()
{
    float workingHours;
    printf("Enter the total working hours in the week \n");
    scanf("%f", &workingHours);
    float dedPerc = (workingHours * 50) / 100;
    float salaryAD = (workingHours * 50) - dedPerc;
    if (workingHours < 40)
    {
        printf("the total salary per week is %f", salaryAD);
    }
    else
    {
        printf("the total salary per week is %f", workingHours * 50);
    }
}
