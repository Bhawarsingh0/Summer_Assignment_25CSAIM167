#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.\n");
            printf("You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}