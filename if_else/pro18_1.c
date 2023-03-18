// write a program to findout the 2 Planet Distance 

#include<stdio.h>

void main()
{
    long long int planet1,planet2,distance;

    printf("Enter the value of Planet1 :(1 Mercury) (2 Venus) (3 Earth) (4 Mars) (5 Jupiter) (6 Saturn) (7 Uranus) (8 Neptune)");
    printf("\nEnter the Choice Planet1 :");
    scanf("%lld",&planet1);

    printf("\nEnter the value of Planet2 :(1 Mercury) (2 Venus) (3 Earth) (4 Mars) (5 Jupiter) (6 Saturn) (7 Uranus) (8 Neptune)");
    printf("\nEnter the Choice Planet2 :");
    scanf("%lld",&planet2);

    // planet1 
    if (planet1 == 1 && planet2 == 2)
    {
        // distance = Mercury - Venus
        distance = (-57900000 + 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 3) 
    {
        // distance = Mercury - Earth
        distance = (-57900000 + 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 4) 
    {
        // distance = Mercury - Mars
        distance = (-57900000 + 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 5) 
    {
        // distance = Mercury - Jupiter
        distance = (-57900000 + 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 6) 
    {
        // distance = Mercury - Saturn
        distance = (-57900000 + 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 7) 
    {
        // distance = Mercury - Uranus
        distance = (-57900000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 1 && planet2 == 8) 
    {
        // distance = Mercury - Neptune
        distance = (-57900000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    
    //Planet2
    else if (planet1 == 2 && planet2 == 1)
    {
        // distance = Venus - Mercury 
        distance = (108200000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 3)
    {
        // distance = Venus - Earth
        distance = (-108200000 + 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 4) 
    {
        // distance = Venus - Mars
        distance = (-108200000 + 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 5) 
    {
        // distance = Venus - Jupiter
        distance = (-108200000 + 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 6) 
    {
        // distance = Venus - Saturn
        distance = (-108200000 + 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 7) 
    {
        // distance = Venus - Uranus
        distance = (-108200000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 2 && planet2 == 8) 
    {
        // distance = Venus - Neptune
        distance = (-108200000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }

    // Planet3
    else if (planet1 == 3 && planet2 == 1) 
    {
        // distance = Earth - Mercury
        distance = (149600000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 2) 
    {
        // distance = Earth - Venus
        distance = (149600000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 4) 
    {
        // distance = Earth - Mars
        distance = (-149600000 + 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 5) 
    {
        // distance = Earth - Jupiter
        distance = (-149600000 + 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 6) 
    {
        // distance = Earth - Saturn
        distance = (-149600000 + 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 7) 
    {
        // distance = Earth - Uranus
        distance = (-149600000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 3 && planet2 == 8) 
    {
        // distance = Earth - Neptune
        distance = (-149600000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }
   
    //Planet4
    else if (planet1 == 4 && planet2 == 1) 
    {
        // distance = Mars - Mercury
        distance = (227900000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 2) 
    {
        // distance = Mars - Venus
        distance = (227900000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 3) 
    {
        // distance = Mars - Earth
        distance = (227900000 - 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 5) 
    {
        // distance = Mars - Jupiter
        distance = (-227900000 + 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 6) 
    {
        // distance = Mars - Saturn
        distance = (-227900000 + 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 7) 
    {
        // distance = Mars - Uranus
        distance = (-227900000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 4 && planet2 == 8) 
    {
        // distance = Mars - Neptune
        distance = (-227900000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }

    //Planet5
    else if (planet1 == 5 && planet2 == 1) 
    {
        // distance = Jupiter - Mercury
        distance = (778600000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 2) 
    {
        // distance = Jupiter - Venus
        distance = (778600000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 3) 
    {
        // distance = Jupiter - Earth
        distance = (778600000 - 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 4) 
    {
        // distance = Jupiter - Mars
        distance = (778600000 - 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 6) 
    {
        // distance = Jupiter - Saturn
        distance = (-778600000 + 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 7) 
    {
        // distance = Jupiter - Uranus
        distance = (-778600000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 5 && planet2 == 8) 
    {
        // distance = Jupiter - Neptune
        distance = (-778600000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }

    // Planet6
    else if (planet1 == 6 && planet2 == 1) 
    {
        // distance = Saturn - Mercury
        distance = (1433500000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 2) 
    {
        // distance = Saturn- Venus
        distance = (1433500000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 3) 
    {
        // distance = Saturn - Earth
        distance = (1433500000 - 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 4)
    {
        // distance = Saturn - Mars
        distance = (1433500000 - 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 5) 
    {
        // distance = Saturn - Jupiter
        distance = (1433500000 - 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 7) 
    {
        // distance = Saturn - Uranus
        distance = (-1433500000 + 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 6 && planet2 == 8) 
    {
        // distance = Saturn - Neptune
        distance = (-1433500000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }

    // Planet7
    else if (planet1 == 7 && planet2 == 1) 
    {
        // distance = Uranus - Mercury
        distance = (2872500000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 2) 
    {
        // distance = Uranus - VenusUranus
        distance = (2872500000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 3) 
    {
        // distance = Uranus - Earth
        distance = (2872500000 - 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 4) 
    {
        // distance = Uranus - Mars
        distance = (2872500000 - 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 5) 
    {
        // distance = Uranus - Jupiter
        distance = (2872500000 - 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 6) 
    {
        // distance = Uranus - Saturn
        distance = (2872500000 - 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 7 && planet2 == 8) 
    {
        // distance = Uranus - Neptune
        distance = (-2872500000 + 4495100000);
        printf("\nPlanet Distance is :%lld",distance);
    }

    // Planet8
    else if (planet1 == 8 && planet2 == 1) 
    {
        // distance = Neptune - Mercury
        distance = (4495100000 - 57900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 2) 
    {
        // distance = Neptune - Venus
        distance = (4495100000 - 108200000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 3) 
    {
        // distance = Neptune - Earth
        distance = (4495100000 - 149600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 4) 
    {
        // distance = Neptune - Mars
        distance = (4495100000 - 227900000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 5) 
    {
        // distance = Neptune - Jupiter
        distance = (4495100000 - 778600000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 6) 
    {
        // distance = Neptune - Saturn
        distance = (4495100000 - 1433500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else if (planet1 == 8 && planet2 == 7) 
    {
        // distance = Neptune - Uranus
        distance = (4495100000 - 2872500000);
        printf("\nPlanet Distance is :%lld",distance);
    }
    else 
    {
        printf("\nInvalid Planet.\nPlease try again ....\n");
    }
    printf("\nGOOD BY..");
}