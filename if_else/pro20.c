// write a program to findout how many days a month has
// nested if

#include<stdio.h>

void main()
{
    int month;

    printf("Enter the month (1 = January ..... 12 = December): ");
    scanf("%d",&month);
    
    if (month <= 12 && month >= 1)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            printf("31 days");
        }
        else if (month == 2)
        {
            printf("28/29 days");
        }
        else
        {
            printf("30 days");
        }
    }
    else
    {
        printf("\nInvalid ");
    }
    printf("\nGOOD BY..");
}