#include <stdio.h>
#include <stdlib.h>

void fixedrow()
{
    int n;
    printf("enter no. of row: ");
    scanf("%d", &n);
    int(*a)[5] = (int(*)[5])malloc(n * 5 * sizeof(int));
    printf("enter numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("row %d\n", i);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
void fixedcol()
{
    int n;
    printf("enter no. of column: ");
    scanf("%d", &n);
    int *a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    printf("enter numbers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("for row%d\n", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

void allvar()
{
    int n, *ptr_coloumn;
    int **a;
    printf("Enter the no of rows: ");
    scanf("%d", &n);
    a = (int **)malloc(n * sizeof(int));
    ptr_coloumn = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter coloumn size for row %d: ", i + 1);
        scanf("%d", &ptr_coloumn[i]);
        a[i] = (int *)malloc(sizeof(int) * ptr_coloumn[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ptr_coloumn[i]; j++)
        {
            printf("Enter the element for n %d column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe array: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ptr_coloumn[i]; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    free(ptr_coloumn);
    free(n);
}
int main()
{
    int n;
    printf("enter case: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        fixedrow();
        break;
    case 2:
        fixedcol();
        break;
    case 3:
        allvar();
        break;
    default:
        break;
    }
}