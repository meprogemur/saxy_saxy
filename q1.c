#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        sum += a[i];
    }
    printf("numbers are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("average: %d", sum / n);
}