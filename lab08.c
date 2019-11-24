#include <stdio.h>
#include <stdlib.h>

void populate(int *lamps, int n);
int onOff(int current);
void printLamps(int *lamps, int n);

void main(void)
{
    int n;
    int j, k;

    // Take in input from user
    printf("Enter number of lamps: ");
    scanf("%d", &n);

    // Make sure vaild input
    while (n < 0)
    {
        printf("Enter a number of lamps: ");
        scanf("%d", &n);
    }

    int lamps[n+1];

    // Fill up array with n number of lamps
    populate(lamps, n);

    // loop to figure out
    for (j = 1; j < n+1; j++)
    {
        for (k = 1; k < n+1; k++)
        {
            int temp;
            if (k % j == 0)
            {
                temp = onOff(lamps[k-1]);
                lamps[k-1] = temp;
            }
        }
    }

    // Prints the result
    printLamps(lamps, n);
}


// return the opposite
int onOff(int current)
{
    if (current == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void populate(int *lamps, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        lamps[i] = 0;
    }

}

void printLamps(int *lamps, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d ", lamps[i]);
    }
    printf("\n");
}
