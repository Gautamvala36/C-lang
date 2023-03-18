// write a program to findout whether given number odd nad even

#include<stdio.h>

void main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d",&number);

    if (number %2 ==0)
    {
        printf("it is a even");
    }
    else
    {
        printf("it is a odd");
    }
     printf("\nGood By..");   
}