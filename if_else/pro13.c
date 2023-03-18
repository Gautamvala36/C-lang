// write a c program to cal final elec. bill based upon below given to 
// critria take monthly elec.unit from use as input
// unit                  price per unit
// <1                       3
// >=1 && <50               3.05
// >=51 && <100             3.5
// >=101 && <250            4.15
// >250                     5.2

#include<stdio.h>

void main()
{
    int unit,price,amount;
    printf("Enter the unit:");
    scanf("%d",&unit);

    if (unit < 1)
    {
        price=3;
    }
    else if(unit >=1 && unit <50)
    {
        price=3.05;
    }
    else if(unit >=51 && unit <100)
    {
        price=3.5;
    }
    else if(unit >=101 && unit <250)
    {
        price=4.15;
    }
    else
    {
        price=5.2;
    }
    amount=unit*price;
    printf("Total amt. pay is :%d",amount);
}
