#include <stdio.h>
#include <stdlib.h>

void row_fixed()
{
    int coloumn[4];
    int *ptr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the no. of coloumn for row %d : ", i + 1);
        scanf("%d", &coloumn[i]);
        ptr[i] = (int *)malloc(sizeof(int) * coloumn[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < coloumn[j]; j++)
        {
            printf("Enter the element for row %d column %d: ", i + 1, j + 1);
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("\nThe array: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < coloumn[j]; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
}

void coloumn_fixed()
{
    int row;
    int(*ptr)[5];
    printf("Enter the no of rows: ");
    scanf("%d", &row);
    ptr = (int(*)[5])malloc(row * 5 * sizeof(int));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the element on row %d coloumn %d: ", i + 1, j + 1);
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("\nThe array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
}

void nothing_fixed()
{
    int row, *ptr_coloumn;
    int **ptr;
    printf("Enter the no of rows: ");
    scanf("%d", &row);
    ptr = (int **)malloc(row * sizeof(int));
    ptr_coloumn = (int *)malloc(row * sizeof(int));
    for (int i = 0; i < row; i++)
    {
        printf("Enter coloumn size for row %d: ", i + 1);
        scanf("%d", &ptr_coloumn[i]);
        ptr[i] = (int *)malloc(sizeof(int) * ptr_coloumn[i]);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < ptr_coloumn[i]; j++)
        {
            printf("Enter the element for row %d column %d: ", i + 1, j + 1);
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("\nThe array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < ptr_coloumn[i]; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    free(ptr_coloumn);
    free(ptr);
}

void main()
{
    int n;
    printf("enter case: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        row_fixed();
        break;
    case 2:
        coloumn_fixed();
        break;
    case 3:
        nothing_fixed();
        break;
    default:
        break;
    }
}