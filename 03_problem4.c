#include <stdio.h>

int main()
{
    int year;
    printf("Enter your year:");
    scanf("%d", &year);

    if (year%4==0)
    {
        printf("%d is a leap year", year);
    }
    else
        printf("%d is a not a leap year", year);
    return 0;
}