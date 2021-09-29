#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int row_pos;
    int col_pos;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
void create(int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            struct node *new = (struct node *)calloc(1, sizeof(struct node));
            new->row_pos = i;
            new->col_pos = j;
            if (head == NULL)
            {
                head = new;
                tail = new;
            }
            else
            {
                tail->next = new;
                tail = new;
            }
        }
    }
}
void display(int c)
{
    struct node *current = head;
    while (current != NULL)
    {

        printf("%d ", current->data);
        if (current->col_pos == c - 1)
        {
            printf("\n");
        }
        current = current->next;
    }
}
int main()
{
    int r, c;
    printf("Enter number of row and col: ");
    scanf("%d %d", &r, &c);
    create(r, c);
    display(c);
}