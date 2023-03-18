#include <stdio.h>

void main()
{
    int num, ans;

    printf("Enter the value of num : ");
    scanf("%d", &num);

    if (num > 0)
    {
        ans = num * num;
        printf("Enter the ans :%d", ans);
    }
    printf("\nGoodby....");
}