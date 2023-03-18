// write a program Character lowercase value and uppercase value.

#include<stdio.h>
void main()
{
    char c;

    printf("Enter the value : ");
    scanf("%c",&c);

    if (c >= 'a' && c <= 'z')
    {
        printf("it is a lowercase");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("it is a uppaercase");
    }
    else
    {
        printf("\nIt's a Consonant");
    }
    
    printf("\nGood By..");
    
}