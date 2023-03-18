#include<stdio.h>

void main()
{
    int unit,amount,unitcharg,total;

    printf("Enter the unit :");
    scanf("%d",&unit);

    if(unit < 50)
    {
        amount=unit*3.05;
        unitcharg=25;
    }
    else if (unit < 100)
    {
        amount=130+((unit-50)*4.25);
        unitcharg=35;
    }
    else if (unit < 200)
    {
        amount=130+162+((unit-100)*5.26);
        unitcharg=45;
    }
    else
    {
        amount=130+162+526+((unit-200)*7.75);
        unitcharg=55;
    }
    total=amount+unitcharg;
    printf("Total amy. pay is :%d",total);
    
}