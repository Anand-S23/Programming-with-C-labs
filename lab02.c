// program to print out the fib sequence and the ratio

#include <stdlib.h>
#include <stdio.h>

int f(int n);
double ratio(int n);

void main(void)
{
    for (int i = 0; i < 21; i++)
    {
        if (i == 0)
        {
            printf("f(0) = %d. Ratio is undefined.\n", f(i));
        }
        else
        {
            printf("f(%d) = %d. Ratio is %lf.\n", i, f(i), ratio(i));
        }
    }
}

int f(int n)
{
    if (n <= 1 )
    {
        return 1;
    }
    else
    {
        return (f(n-1) + f(n-2));
    }
}

double ratio(int n)
{
    int prev = f(n-1);
    int current = f(n);

    if (n >  0)
    {
        return (double)current / (double)prev;
    }

}
