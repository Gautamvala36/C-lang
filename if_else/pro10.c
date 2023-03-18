// writr a program to findout which number to greter out of given 3 num 
// && ||

#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("a is greter");
    }
    else if (b>a && b>c)
    {
        printf("b is greter");
    }
    else if (c>a && c>b)
    {
        printf("c is greter");
    }
    else
    {
        printf("All are same");
    }   
}