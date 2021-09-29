#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, y, *arr, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int even_num = 0, odd_num = 0;
    int *odd, *even;
    odd = (int *)malloc((n / 2) * sizeof(int));
    even = (int *)malloc((n / 2) * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[even_num] = arr[i];
            even_num++;
        }
        else
        {
            odd[odd_num] = arr[i];
            odd_num++;
        }
    }
    for (int i = 0; i < odd_num; i++)
    {
        arr[i] = odd[i];
    }
    int s = odd_num;
    for (int i = 0; i < even_num; i++)
    {
        arr[s] = even[i];
        s++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    free(odd);
    free(even);
}