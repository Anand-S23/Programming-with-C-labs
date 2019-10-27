// Program to compute exponents

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double myPower(double, int);

void main(void)
{
    double base;
    int exp;

    printf("Enter the base(double) or -999 to exit: ");
    scanf("%lf", &base);

    while (base != -999)
    {
        printf("Enter the exponent(integer): ");
        scanf("%d", &exp);

        printf("The answer to %lf^%d is %lf.\n", base, exp, myPower(base, exp));

        printf("Enter the base(double ) or -999 to exit: ");
        scanf("%lf", &base);
    }

}

double myPower(double base, int exp)
{
    double retval;
    int i;
    double total = 1.0;

    if (base == 0.0 && exp >= 0)
    {
        retval = 0.0;
    }
    else if (base == 0.0 && exp < 0)
    {
        retval = INFINITY;
    }
    else if (base != 0 && exp == 0)
    {
        retval = 1.0;
    }
    else if (base != 0.0 && exp < 0)
    {
        exp = -exp;

        for (i = 0; i < exp; i++)
        {
            total = total * (1.0/base);
        }

        retval = total;
    }
    else
    {
        for (i = 0; i < exp; i++)
        {
            total = total * base;
        }

        retval = total;
    }

    return retval;
}
