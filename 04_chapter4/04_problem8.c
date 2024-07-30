#include <stdio.h>

int main()
{
    int n, prime = 0;
    printf("Enter Your Number:");
    scanf("%d", &n);

    if (n == 0 ||n== 1)
    {
        prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;

                /* code */
            }
        }
    }
    if (prime)
    {
        printf("The number is not prime");

        /* code */
    }
    else
    {
        printf("the number is prime");
    }

    return 0;
}