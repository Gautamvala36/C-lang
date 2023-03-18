// write a program  to digit in words only 2 number
// number =56
// five six

#include<stdio.h>

void main()
{
    int number,frist,second;
    printf("Enter the number :");
    scanf("%d",&number);

    frist=number/10;
    second=number%10;
    
    if (frist==5)
    {
        printf("five");
    }
    if (second==6)
    {
        printf("\tsix");
    }
    else
    {
        printf("zero");
    }
}