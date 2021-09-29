#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mean(int *x, int n)
{
    float mean = 0;
    for (int i = 0; i < n; i++)
    {
        mean += x[i];
    }
    mean = (mean / n);
    return mean;
}

float std_dev(int *x, int n)
{
    float std = 0;
    float avg = mean(x, n);
    for (int i = 0; i < n; i++)
    {
        std += ((x[i] - avg) * (x[i] - avg));
    }
    float deviation = sqrt(std / n);
    return deviation;
}

void main()
{
    int n = 20, *p;
    p = (int *)malloc(n * sizeof(int)); //(int*)calloc(n,sizeof(int))
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. : ");
        scanf("%d", &p[i]);
    }
    float standard_deviation = std_dev(p, n);
    printf("\nThe standard deviation of numbers is: %.2f", standard_deviation);
    free(p);
}