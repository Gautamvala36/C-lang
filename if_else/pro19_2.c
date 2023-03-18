#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter value of num1 :");
    scanf("%d", &num1);
    printf("Enter value of num2 :");
    scanf("%d", &num2);
    printf("Enter value of num3 :");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("All are equal");
    }
    else
    {
        if (num1 == num2)
        {
            printf("num1 and num2 are equal");
        }
        else
        {
            if (num1 > num3)
            {
                if (num1 > num2)
                {
                    printf("num1 is greater");
                }
                else
                {
                    printf("\nnum3 is greater");
                }
            }
        }
        if (num2 == num3)
        {
            printf("\nnum2 and num3 are equal");
        }
        else
        {
            if (num2 > num3)
            {
                printf("\nnum2 is greater..");
            }
            else
            {
                printf("\nnum3 is greater..");
            }
        }
    }
    printf("\nGood BY..");
}

// 90 10 50 = num1 is greater num3 is greater..
// 90 50 10 = num1 is greater num2 is greater..
// 10 90 50 = num2 is greater..
// 10 50 90 = num3 is greater..
// 50 10 90 = num3 is greater..
// 50 90 10 = num3 is greater num2 is greater..

// 50 50 32 = num1 and num2 are equal num2 is greater
// 50 32 50 = num3 is greater
// 32 50 50 = num2 ans num3 are equal

// 50 50 96 = num1 ans num2 are equal num3 is greater
// 50 96 50 = num2 is greater
// 96 50 50 = num1 is greater num2 and num3 are equal