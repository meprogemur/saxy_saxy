#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int n)
{
    int first = 0;
    int last = n - 1;
    int temporary;
    while (first < last)
    {
        temporary = x[first];
        x[first] = x[last];
        x[last] = temporary;
        first++;
        last--;
    }
}

void main()
{
    int n, *p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int)); //(int*)malloc(n,sizeof(int))
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no. : ");
        scanf("%d", &p[i]);
    }
    swap(p, n);
    printf("Reversed Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d \n", p[i]);
    }
    free(p);
}