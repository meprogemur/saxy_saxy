#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, n, sum = 0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int)); //(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. : ");
        scanf("%d", &p[i]);
        sum += p[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("Number: %d\n ", p[i]);
    }
    avg = sum / n;
    printf("%d\n", sum);
    printf("The average is: %.2f", avg);
    free(p);
}
