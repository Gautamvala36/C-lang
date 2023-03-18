// write a program to findout the 2 Planet Distance

#include<stdio.h>

void main()
{
    int planet;

    printf("Enter the number of Planet :(1 Mercury) (2 Venus) (3 Earth) (4 Mars) (5 Jupiter) (6 Saturn) (7 Uranus) (8 Neptune) (9 All)");
    printf("\nEnter the Distance of Choice Planet : ");
    scanf("%d",&planet);

    if (planet == 1)
    {
        printf("Mercury");
        printf("\tDistance is 57900000 Between Sun");
    }
    else if (planet == 2)
    {
        printf("Venus");
        printf("\tDistance is 108200000 Between Sun");
    }
    else if (planet == 3)
    {
        printf("Earth");
        printf("\tDistance is 149600000 Between Sun");
    }
    else if (planet == 4)
    {
        printf("Mars");
        printf("\tDistance is 227900000 Between Sun");
    }
    else if (planet == 5)
    {
        printf("Jupiter");
        printf("\tDistance is 778600000 Between Sun");
    }
    else if (planet == 6)
    {
        printf("Saturn");
        printf("\tDistance is 1433500000 Between Sun");
    }
    else if (planet == 7)
    {
        printf("Uranus");
        printf("\tDistance is 2872500000 Between Sun");
    }
    else if (planet == 8)
    {
        printf("Neptune");
        printf("\tDistance is 4495100000 Between Sun");
    }
    else if (planet == 9)
    {
        printf("1 Mercury Distance is 57900000 Between Sun");
        printf("\n2 Venus Distance is 108200000 Between Sun");
        printf("\n3 Earth Distance is 149600000 Between Sun");
        printf("\n4 Mars Distance is 227900000 Between Sun");
        printf("\n5 Jupiter Distance is 778600000 Between Sun");
        printf("\n6 Saturn Distance is 1433500000 Between Sun");
        printf("\n7 Uranus Distance is 2872500000 Between Sun");
        printf("\n8 Neptune Distance is 4495100000 Between Sun");
    }
    else
    {
        printf("Invalid.\nPlease try again ....\n");
    }
    printf("\nGOOD BY...");
    
}