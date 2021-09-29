#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int pow;
    struct Node *next;
};
struct node *head = NULL, *tail = NULL;

void create_node(int x, int y)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->coeff = x;
    new->pow = y;
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
        tail = new;
        return;
    }
    tail->next = new;
    tail = tail->next;
}
void display(struct node *node)
{
    while (node != NULL)
    {
        printf("%dx^%d", node->coeff, node->pow);
        if (node->next != NULL)
            printf("+");
        node = node->next;
    }
}
void add(int a)
{
    struct node *current = head;
    while (current != NULL)
    {
        current->coeff = current->coeff + a;
        current = current->next;
    }
}
void multiply(int a)
{
    struct node *current = head;
    while (current != NULL)
    {
        current->coeff = current->coeff * a;
        current = current->next;
    }
}

int main()
{
    int x, y, n, a;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d coefficient and exponent: ", i + 1);
        scanf("%d %d", &x, &y);
        create_node(x, y);
    }

    display(head);
    printf("\n");
    printf("Enter number to add: ");
    scanf("%d", &a);
    add(a);
    display(head);
    printf("\n");
    printf("Enter number to multiply: ");
    scanf("%d", &a);
    multiply(a);
    display(head);
    printf("\n");
    return 0;
}
