#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int random_number = (rand() % 100) + 1;
    int numberofguesses = 1;
    int guessednumber;
    printf("enter your guessed number:");
    scanf("%d", &guessednumber);

    do
    {

        if (guessednumber > random_number)
        {
            printf("\nenter a lower number:");
            scanf("%d", &guessednumber);
        }
        else if (guessednumber < random_number)
        {
            printf("\nenter a higher number:");
            scanf("%d", &guessednumber);
        }

        numberofguesses++;

    } while (guessednumber != random_number);
    printf("congrats it is the correct number");

    printf("\n you guessed the number in %d guesses", numberofguesses);

    return 0;
}