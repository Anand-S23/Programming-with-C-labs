// Anandsroop Singh  -- Sec. 1

#include <stdio.h>
#include <stdlib.h>

void factors(int);

void main(void)
{
    int i;

    for (i = 1; i < 101; i++)
    {
        factors(i);
    }
}


void factors(int i)
{
    int j, k;
    int count = 0;

    for(j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            count++;
        }
    }

    for(k = 1; k <= i; k++)
    {
        if (k == 1)
        {
            printf("%3d: (%2d) 1", i, count);
        }
        else if (i % k == 0)
        {
            printf(",%d", k);
        }
    }
    printf("\n");
}
