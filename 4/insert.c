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

void insert(int data, int pos)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (pos == 0)
    {
        temp->data = first->data;
        temp->next = first->next;
        first->next = temp;
        first->data = data;
    }
    else
    {
        struct node *x;
        x = (struct node *)malloc(sizeof(struct node));
        x = first;
        for (int i = 0; i < pos - 1; i++)
        {
            x = x->next;
        }
        temp->data = data;
        temp->next = x->next;
        x->next = temp;
    }
}

void insert_end(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    last->next = temp;
    temp->next = NULL;
    last = temp;
}

void display()
{
    struct node *show;
    show = first;
    printf("\nThe elements in the linked list are: \n");
    while (show)
    {
        printf("%d ", show->data);
        show = show->next;
    }
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
    int n = 5, choice, data;
    create(A, n);
    while (1)
    {

        printf("\nEnter your choice: ");
        printf("\nPress 1 to enter element in the begining: ");
        printf("\nPress 2 to enter at any position other than begining and end: ");
        printf("\nPress 3 to enter the element at the end: ");
        printf("\nPress 4 to quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &data);
            insert(data, 0);
            display();
            break;
        case 2:
            printf("Enter the value: ");
            scanf("%d", &data);
            insert_end(data);
            display();
            break;
        case 3:
            printf("Enter the value: ");
            scanf("%d", &data);
            int pos;
            printf("Enter positon to be entered: ");
            scanf("%d", &pos);
            insert(data, pos);
            display();
            break;
        case 4:
            exit(0);
        default:
            exit(0);
        }
    }
    printf("hahaha");

    delete ();
}