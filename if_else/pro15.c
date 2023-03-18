// write a program to make cal.
// given below option
// add
// sub
// mul
// div
// modulas
// min
// max
// equality

#include<stdio.h>

void main()
{
    int a,b,ans,option;
    printf("Enter the value of a :");
    scanf("%d",&a); 
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("This is value of 1 add");
    printf("\nThis is value of 2 sub");
    printf("\nThis is value of 3 mul");
    printf("\nThis is value of 4 div");
    printf("\nThis is value of 5 modulas");
    printf("\nThis is value of 6 min");
    printf("\nThis is value of 7 max");
    printf("\nThis is value of 8 equality");
    printf("\nThis is value of 9 all option");
    printf("\nSelect the any value of above :");
    scanf("%d",&option);

    if(option == 1)
    {
        ans= a+b;
        printf("This is ans of add :%d",ans);
    }
    else if (option == 2)
    {
        ans=a-b;
        printf("This is ans of sub :%d",ans);
    }
    else if (option == 3)
    {
        ans=a*b;
        printf("This is ans of mul :%d",ans); 
    }
    else if (option == 4)
    {
        ans=a/b;
        printf("This is ans of div :%d",ans);
    }
    else if (option == 5)
    {
        ans=a%b;
        printf("This is ans of modulas :%d",ans);
    }
    else if (option == 6)
    {
        ans=a<b;
        printf("This is ans of min :%d",ans);
    }
    else if (option == 7)
    {
        ans=a>b;
        printf("This is ans of max :%d",ans);
    }
    else if (option == 8)
    {
        ans=a==b;
        printf("This is ans of equality :%d",ans);
    }
    else if ( option == 9)
    {
        ans=a+b;
        printf("1 This is add :%d",ans);
        ans=a-b;
        printf("\n2 This is sub :%d",ans);
        ans=a*b;
        printf("\n3 This is mul :%d",ans);
        ans=a/b;
        printf("\n4 This is div :%d",ans);
        ans=a%b;
        printf("\n5 This is modulas :%d",ans);
        ans=a<b;
        printf("\n6 This is min :%d",ans);
        ans=a>b;
        printf("\n7 This is max :%d",ans);
        ans=a==b;
        printf("\n8 This is equality :%d",ans);
    }
    else
    {
        printf("This is Valide Number");
    }
        printf("\nGood by...");
}