#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Earth\n3. Mars\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Question 5
    printf("\n5. Who is known as the Father of Computers?\n");
    printf("1. Charles Babbage\n2. Isaac Newton\n3. Albert Einstein\n4. Thomas Edison\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    // Display Result
    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d out of 5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}