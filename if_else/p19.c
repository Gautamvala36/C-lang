#include <stdio.h>
void main()
{
    int ans, a, b, opc;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("ENTER THE  OPC (1:add)(2:SUB)(3:MUL)(4:DIV)(5:modulas)(6:MIN)(7:MAX)(8:EQUALITY)(9:ALL OPC)");
    printf("\neneter the opc number :-");
    scanf("%d", &opc);
    if (opc == 1)
    {
        ans = a + b;
        printf("the value of add:%d", ans);
    }
    else if (opc == 2)
    {
        ans = a - b;
        printf("the value of sub:%d", ans);
    }
    else if (opc == 3)
    {
        ans = a * b;
        printf("the value of mul:%d", ans);
    }
    else if (opc == 4)
    {
        ans = a / b;
        printf("the value of div:%d", ans);
    }
    else if (opc == 5)
    {
        ans = a % b;
        printf("the value of moduals:%d", ans);
    }
    else if (opc == 6 && a > b)
    {
        printf("b is min");
    }
    else if (opc == 6 && b > a)
    {
        printf("\n a is min");
    }
    else if (opc == 7 && a > b)
    {
        printf("a is max");
    }
    else if (opc == 7 && b > a)
    {
        printf("b is max");
    }
    else if (opc == 8 && a == b)
    {
        printf("a and b is equal value", ans);
    }
    else if (opc == 8 && a != b)
    {
        printf("a and b value not same", ans);
    }
    else
    {
        printf("end");
    }
}