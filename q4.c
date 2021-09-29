#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sum = 0, mean;
    float stan;
    int *a = (int *)malloc(20 * sizeof(int));
    printf("enter numbers: \n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", a + i);
        sum += a[i];
    }
    mean = sum / 20;
    sum = 0;
    for (int j = 0; j < 20; j++)
    {
        sum += pow(a[j] - mean, 2);
    }

    stan = pow(sum / 20, 0.5);
    printf("standard dev is %f", stan);
    free(a);
}