#include <stdio.h>

int main()
{
    int income;
    printf("enter in income in ruppees:");
    scanf("%d", &income);

        if (income < 250000)
    {
        printf("your income tax will be 0%%");
    }

    else if (income >= 250000 && income<500000)
    {
        printf("your income tax will be 5%% ");
        
    }

    else if (income >= 500000 && income<1000000)
    {
        printf("your income tax will be 20%% ");
    }

    else
    {
        printf("your income tax will be 30%% and");
    }

    return 0;
}