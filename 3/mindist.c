//min distanv=ce between two elements

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int minDist(int *a, int n, int x, int y)
{
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((x == a[i] && y == a[j] || y == a[i] && x == a[j]) && min_dist > abs(i - j))
            {
                min_dist = abs(i - j);
            }
        }
    }
    if (min_dist > n)
    {
        return -1;
    }
    return min_dist;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    printf("Minimum distance between %d and %d is %d\n", x,
           y, minDist(a, n, x, y));
    return 0;
}