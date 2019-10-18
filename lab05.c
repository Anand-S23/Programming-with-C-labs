#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 1000000

void doubleMe(int *x);
void swap(double *a, double *b);
void firstLast(char theString[], char *first, char *last);

void main(void)
{
    int num;
    double float1, float2;
    char theString[MAX];
    char small, big;

    small, big = 'z', 'a';

    printf("Enter a integer to find its double: ");
    scanf("%d", &num);
    printf("The number is %d.\n", num);
    doubleMe(&num);
    printf("The number doubled is %d.\n", num);

    printf("Enter two floats: ");
    scanf("%lf %lf", &float1, &float2);
    printf("Before swap A = %lf and B = %lf.\n", float1, float2);
    swap(&float1, &float2);
    printf("Before swap A = %lf and B = %lf.\n", float1, float2);

    printf("Enter in a word: ");
    scanf(" %s", theString);
    firstLast(theString, &small, &big);
    printf("Your word was: %s\n", theString);
    printf("The smallest letter is %c and the biggest is %c.\n", big, small);
}

void doubleMe(int *x)
{
    *x *= 2;
}


void swap(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void firstLast(char theString[], char *first, char *last)
{
    int i;

    for(i=0; i < strlen(theString); i++)
    {
        if (tolower(theString[i]) >= 97 && tolower(theString[i]) <= 122)
        {
            if (tolower(theString[i]) >= *first)
            {
                *first = theString[i];
            }
            if (tolower(theString[i]) <= *last)
            {
                *last = theString[i];
            }
        }
    }
}

