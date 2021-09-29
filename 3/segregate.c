//You are given an array of 0s and 1s in random order.
//Segregate 0s on left side and 1s on right side of the array. Traverse array only once.

#include <stdio.h>

void segregate(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
    }

    for (int i = 0; i < count; i++)
        arr[i] = 0;

    for (int i = count; i < n; i++)
        arr[i] = 1;
}

int main()
{
    int n;
    printf("Enter number. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    segregate(arr, n);
    printf("Segregated array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}