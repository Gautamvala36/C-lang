// millannium years es 1000,2000,3000,4000
// <,>,!=,<=,=>,==

#include<stdio.h>

void main()
{
    int year;

    printf("Enter the any year :");
    scanf("%d",&year);    

    if (year%1000==0)
    {
        printf("it is a millannium year");
    }
    else
    {
        printf("it is not millannium year");
    }
    
}