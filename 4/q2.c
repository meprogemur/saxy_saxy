#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL, *last = NULL;

void create(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        struct node *temp;
        temp = (struct node *)malloc(n * sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        if (first == NULL)
        {
            first = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            last = temp;
        }
    }
}

void display(struct node *show)
{
    if (show == NULL)
        return;
    printf("%d ", show->data);
    display(show->next);
}

void delete ()
{
    struct node *temp;
    while (first)
    {
        temp = first;
        first = first->next;
        free(temp);
    }
}

void main()
{

    int A[] = {5, 4, 3, 2, 1};
    int n = 5;
    create(A, n);
    display(first);
    delete ();
}