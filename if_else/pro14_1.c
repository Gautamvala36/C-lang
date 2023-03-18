// write a c program to cal final elec. bill based upon below given to
// critria take monthly elec.unit from use as input
// unit                  price per unit
// <50                      3.20
// >=51 && <200             3.95
// >200                     5

#include <stdio.h>

void main()
{
    int unit, price, amount;
    printf("Enter the unit:");
    scanf("%d", &unit);

    if (unit < 50)
    {
        price = 3.20;
    }
    else if (unit >= 51 && unit < 200)
    {
        price = 3.95;
    }
    else
    {
        price = 5;
    }
    amount = unit * price;
    printf("Total amt. pay is :%d", amount);
}
