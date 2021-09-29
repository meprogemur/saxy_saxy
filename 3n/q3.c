#include <stdio.h>
#include <stdlib.h>

void swap(int ***ptr, int n)
{

    for (int x = 0; x < n; x++)
    {
        int end = n - 1;
        int start = 0;
        while (end >= start)
        {
            int temp = (*ptr)[x][start];
            (*ptr)[x][start] = (*ptr)[x][end];
            (*ptr)[x][end] = temp;
            start++;
            end--;
        }
    }
}

void main()
{
    int **arr;
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    arr = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element for row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    swap(&arr, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
}