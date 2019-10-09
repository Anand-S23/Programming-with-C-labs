#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

// Anandsroop Singh  --  Sec. 1
// Program that sees the probablity of picking a particular sock based on color.

void main(void)
{
    int nRed, nGreen, nYellow, nOrange, nBlue;
    char c1, c2;
    int n1, n2;
    double prob;

    n1 = 0;
    n2 = 0;

    printf("Enter the number of Red socks: ");
    scanf("%d", &nRed);
    printf("Enter number of Green socks: ");
    scanf("%d", &nGreen);
    printf("Enter the number of Yellow socks: ");
    scanf("%d", &nYellow);
    printf("Enter the number of Orange socks: ");
    scanf("%d", &nOrange);
    printf("Enter the number of Blue socks: ");
    scanf("%d", &nBlue);

    if ((nRed < 0 ) || (nGreen < 0) || (nYellow < 0) || (nOrange < 0) || (nBlue < 0))
    {
         printf("Have to enter numbers greater than zero. Program terminated. \n");
         exit(0);
    }

    printf("Enter the first letter of two colors you want the probablity: ");
    scanf(" %c%c",&c1,&c2);

    if (toupper(c1) == toupper(c2))
    {
        printf("The colors are the same, enter different colors. Program terminated. \n");
        exit(0);
    }


    if ("R" == toupper(c1))
    {
        n1 += nRed;
    }
    else if (toupper(c1) == "G")
    {
        n1 += nGreen;
    }
    else if (toupper(c1) == "Y")
    {
        n1 += nYellow;
    }
    else if (toupper(c1) == "O")
    {
        n1 += nOrange;
    }
    else if (toupper(c1) == "B")
    {
        n1 += nBlue;
    }
//    else
//    {
//        printf("Not a valid number, existing program. \n");
//        exit(0);
//    }


    if ("R" == toupper(c2))
    {
        n2 += nRed;
    }
    else if ("G" == toupper(c2))
    {
        n2 += nGreen;
    }
    else if (toupper(c2) == "Y")
    {
        n2 += nYellow;
    }
    else if (toupper(c2) == "O")
    {
        n2 += nOrange;
    }
    else if (toupper(c2) == "B")
    {
        n2 += nBlue;
    }
    else
    {
        printf("Not a valid color, existing program.\n");
        exit(0);
    }
    printf("%d %d", n1, n2);
    prob = (double)(n1 + n2) / (double)(nRed + nGreen + nYellow + nOrange + nBlue);
    printf("The probabilty for picking those colors are %lf.\n", prob);

}



