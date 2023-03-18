// write a program to findout how many Days a month has
// nested if

#include <stdio.h>

void main()
{
    int month;

    printf("Enter the value of Month :");
    scanf("%d", &month);

    if (month <= 12 && month >= 1)
    {
        if (month == 2)
        {
            printf("February");
            printf("\n28/29 Days");
        }
        else
        {
            if (month <= 7)
            {
                if (month % 2 == 0)
                {
                    if (month == 4)
                    {
                        printf("April");
                        printf("\n30 Days");
                    }
                    else
                    {
                        printf("June");
                        printf("\n30 Days");
                    }
                }
                else
                {
                    if (month == 1)
                    {
                        printf("January");
                        printf("\n31 Days");
                    }
                    else if (month == 3)
                    {
                        printf("March");
                        printf("\n31 Days");
                    }
                    else if (month == 5)
                    {
                        printf("May");
                        printf("\n31 Days");
                    }
                    else
                    {
                        printf("July");
                        printf("\n31 Days");
                    }
                }
            }
            else
            {
                if (month % 2 != 0)
                {
                    if (month == 9)
                    {
                        printf("September");
                        printf("\n30 Days");
                    }
                    else
                    {
                        printf("November");
                        printf("\n30 Days");
                    }
                }
                else
                {
                    if (month == 8)
                    {
                        printf("August");
                        printf("\n31 Days");
                    }
                    else if (month == 10)
                    {
                        printf("October");
                        printf("\n31 Days");
                    }
                    else
                    {
                        printf("December");
                        printf("\n31 Days");
                    }
                }
            }
        }
    }
    else
    {
        printf("Invalid (Month 1,..,12),\nPlease try again ....");
    }
    printf("\nGood by..");
}