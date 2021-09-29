#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head, *tail = NULL;

void create(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {

        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = a[i];
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
}

void display()
{
    struct node *current = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number of element: ");
    scanf("%d", &n);
    int a[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    create(a, 5);
    display();
    return 0;
}