#include <stdlib.h>
#include <stdio.h>

// Anandsroop Singh --  Sec. 1
// Prgram which guesses number user is thinking.

void main(void)
{
    int right, left, middle;
    char userStat;

    printf("Think of a number between 1 and a 100.\n");
    printf("The computer will guess that number type > if number guessed is larger, < if the number guessed is smaller and type = if the number guessed is correct.\n");

    right = 1;
    left = 100;
    middle = (right + left) / 2;

    printf("Are you thinking of the number %d?", middle);
    scanf(" %c", &userStat);

    while (userStat != '=')
    {
        /* middle = (right + left) / 2;

        printf("Are you thinking of the number %d? ", middle);
        scanf(" %c", &userStat);*/

        if (userStat == '<')
        {
            left = middle;
        }
        else if (userStat == '>')
        {
            right = middle;
        }
        else if (userStat != '=')
        {
            printf("Enter a vaild symbol.\n");
        }
        middle = (right + left) / 2;

        printf("Are you thinking of the number %d? ", middle);
        scanf(" %c", &userStat);
    }

    printf("\nI got it! The number you are thinking is %d.\n\n", middle);
}
