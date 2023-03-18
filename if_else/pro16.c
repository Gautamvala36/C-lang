// write a program  to digit in words only 2 number
// number =56
// five six

#include<stdio.h>

void main()
{
    int number=56,frist,second;
    printf("Enter the number :%d",number);

    frist=number/10;
    second=number%10;
    
    if(frist==5)
    {
        printf("\nfive");
    }
    if (second==6)
    {
        printf(" six");
    }
    else
    {
        printf("zero");
    }
    
}