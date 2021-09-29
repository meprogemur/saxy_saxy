#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, j;
    printf("enetr number of elements: ");
    scanf("%d", &n);
    j = n - 1;
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    printf("enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);

        b[j] = a[i];
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    free(a);
    free(b);
}