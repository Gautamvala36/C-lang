// write a program to findout which is smaller out of given to findout officer is smaller out of give 2 officer 
// lseethan
#include<stdio.h>

void main()
{
    int height1,height2,breath1,breath2,office1,office2;
    printf("Enter the value of height1 :");
    scanf("%d",&height1);
    printf("Enter the value of breath1 :");
    scanf("%d",&breath1);
    printf("Enter the value of height2 :");
    scanf("%d",&height2);
    printf("Enter the value of breath2 :");
    scanf("%d",&breath2);    
    office1=height1*breath1;
    office2=height2*breath2;
    if (office1<office2)
    {
        printf("the size of office1 is smaller ");
    }
    else
    {
        printf("the size of office2 is smaller");
    }
}
