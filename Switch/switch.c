#include<stdio.h>

int main()
{
    int a, b, c, ch;
    printf("enter the First Number:");
    scanf("%d", &a);
    printf("enter the Second Number:");
    scanf("%d", &b);
    printf("\n 1. Sum");
    printf("\n 2. Difference");
    printf("\n 3. Product");
    printf("\n Enter your Choice");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            c = a + b;
            printf("\n Sum of two number is %d", c);
            break;

        case 2:
            c = a - b;
            printf("\n difference of two number is %d", c);
            break;

        case 3:
            c = a * b;
            printf("\n product of two number is %d", c);
            break;
        default:
            printf("\n Wrong choice Plese select between 1-3");
    }
}