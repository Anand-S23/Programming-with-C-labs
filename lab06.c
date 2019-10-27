#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// #include "stats.h"


 #define MAXNUM 100

typedef struct person
{
    double height;
    double weight;
} Person;

int getData(FILE *input, Person people[], int maxnum);
void getAverages(Person people[], double *aveHeight, double *aveWeight, int numPeople);
void getStandardDevs(Person people[], double aveHeight, double aveWeight, double *stdHeight, double *stdWeight, int numPeople);

void main(void)
{
    char filename[] = "values.dat";
    FILE *input;
    Person people[MAXNUM];
    int numPeople;
    double aveHeight, aveWeight, stdHeight, stdWeight;

    input = fopen("values.dat", "r");
    numPeople = getData(input, people, MAXNUM);
    fclose(input);
    getAverages(people, &aveHeight, &aveWeight, numPeople);
    getStandardDevs(people, aveHeight, aveWeight, &stdHeight, &stdWeight, numPeople);

    printf("The average height is %lf.\n", aveHeight);
    printf("The average weight is %lf.\n", aveWeight);
    printf("The standard deviation of the heights is %lf.\n", stdHeight);
    printf("The standard deviation of the weights is %lf.\n", stdWeight);
}


int getData(FILE *input, Person people[], int maxnum)
{
    int i = 0;
    int c;
    char t[100];
    double current;
    c = fscanf(input, "%s", t);
    while (c >= 0)
    {
        current = atoi(t);
        people[i].height = current;
        c = fscanf(input, "%s", t);
        current = atoi(t);
        people[i].weight = current;
        c = fscanf(input, "%s", t);
        if (i < maxnum)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return i;
}


void getAverages(Person people[], double *aveHeight, double *aveWeight, int numPeople)
{
    double totalHeight = 0.0;
    double totalWeight = 0.0;
    int i;

    for (i = 0; i < numPeople; i++)
    {
        totalHeight += people[i].height;
        totalWeight += people[i].weight;
    }

    *aveHeight = totalHeight / numPeople;
    *aveWeight = totalWeight / numPeople;
}


void getStandardDevs(Person people[], double aveHeight, double aveWeight, double *stdHeight, double *stdWeight, int numPeople)
{
    double sumHeight = 0.0;
    double sumWeight = 0.0;
    int i;

    for (i = 0; i < numPeople; i++)
    {
        sumHeight += ((people[i].height - aveHeight) * (people[i].height - aveHeight)) / (numPeople - 1);
        sumWeight += ((people[i].weight - aveWeight) * (people[i].weight - aveWeight)) / (numPeople - 1);
    }

    *stdHeight = sqrt(sumHeight);
    *stdWeight = sqrt(sumWeight);

}

