
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, max = -1;
    printf("enter number: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("max is: %d\n", max);
}