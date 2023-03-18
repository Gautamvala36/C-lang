// write a c program to cal final elec. bill based upon below given to 
// critria take monthly elec.unit from use as input
// unit                  price per unit
// <100                     1
// >=100 && <200            2
// >=200 && <300            3
// >=300 && <400            4
// >400                     5

#include<stdio.h>

void main()
{
    int unit,price,amount;
    printf("Enter the unit:");
    scanf("%d",&unit);

    if (unit < 100)
    {
        price=1;
    }
    else if(unit >=100 && unit <200)
    {
        price=2;
    }
    else if(unit >=200 && unit <300)
    {
        price=3;
    }
    else if(unit >=300 && unit <400)
    {
        price=4;
    }
    else
    {
        price=5;
    }
    amount=unit*price;
    printf("Total amt. pay is :%d",amount);
}
