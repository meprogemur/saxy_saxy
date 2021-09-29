#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
struct node *newNode(int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = NULL;
    return tmp;
}
void insert_elements(int data)
{
    struct node *tmp = newNode(data);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    tail->next = tmp;
    tail = tmp;
}
void display_recurse(struct node *current)
{
    if (current == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ", current->data);
    display_recurse(current->next);
}
void length_iter()
{
    int size = 0;
    struct node *current = head;
    while (current != NULL)
    {
        current = current->next;
        size++;
    }
    printf("length= %d\n", size);
}
void length_recurse(struct node *current)
{
    static int size = 0;
    if (current == NULL)
    {
        printf("lemgth = %d\n", size);
        return;
    }
    size++;
    length_recurse(current->next);
}
void sum_iter()
{
    int sum = 0;
    int pro = 1;
    struct node *current = head;
    while (current != NULL)
    {
        sum += current->data;
        pro *= current->data;
        current = current->next;
    }
    printf("sum = %d and product = %d\n", sum, pro);
}
void sum_recurse(struct node *current)
{
    static int sum = 0;
    static int product = 1;
    if (current == NULL)
    {
        printf("sum = %d and product = %d\n", sum, product);
        return;
    }
    sum += current->data;
    product *= current->data;
    sum_recurse(current->next);
}
void max_iter()
{
    struct node *current = head;
    int max = current->data;
    int min = current->data;
    while (current != NULL)
    {
        if (max < current->data)
        {
            max = current->data;
        }
        if (min > current->data)
        {
            min = current->data;
        }
        current = current->next;
    }
    printf("max is %d and min is %d\n", max, min);
}
void max_recurs(struct node *current)
{
    static int max = INT_MIN;
    static int min = INT_MAX;
    if (current == NULL)
    {
        printf("max is %d and min is %d\n", max, min);
        return;
    }
    if (max < current->data)
    {
        max = current->data;
    }
    if (min > current->data)
    {
        min = current->data;
    }
    max_recurs(current->next);
}
int main()
{
    int n, data, s;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insert_elements(data);
    }
    display_recurse(head);
    while (1)
    {
        printf("Enter case:\n");
        printf("1:DISPLAY\n");
        printf("2:LENGTH ITERATIVE\n");
        printf("3:LENGTH RECURSIVE\n");
        printf("4:SUM AND PRODUCT ITERATIVE\n");
        printf("5:SUM AND PRODUCT RECURSIVE\n");
        printf("6:MAX AND MIN ITERATIVE\n");
        printf("7:MAX AND MIN RECURSIVE\n");
        printf("8:QUIT\n");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            display_recurse(head);
            break;
        case 2:
            length_iter();
            break;
        case 3:
            length_recurse(head);
            break;
        case 4:
            sum_iter();
            break;
        case 5:
            sum_recurse(head);
            break;
        case 6:
            max_iter();
            break;
        case 7:
            max_recurs(head);
            break;
        case 8:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }
}