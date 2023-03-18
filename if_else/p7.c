// write a program in Positive or Negative number.

#include<stdio.h>

void main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num < 0)
    {
        printf("This is a Negative");
    }
    else if (num > 0)
    {
        printf("This is a Positive");
    }
    else
    {
        printf("You entered 0.");
    }
    printf("\nGood By...");
}