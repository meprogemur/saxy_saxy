#include <stdio.h>
#define MAX_INT 101
int a[MAX_INT];
int top = -1;
void push(int data)
{
    a[++top] = data;
}
int pop()
{
    return a[top--];
}
int curr()
{
    return a[top];
}
void display()
{
    if (top == -1)
    {
        printf("NOTHING TO DISPLAY");
        return;
    }
    for (int i = 0; i < top + 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void isEmpty()
{
    if (top == -1)
    {
        printf("EMPTY\n");
        return;
    }
    printf("NOT EMPTY\n");
}
int main()
{

    int choice = 0, x;
    printf("\n*********Stack operations using linked list*********\n");
    printf("\n----------------------------------------------\n");
    while (1)
    {
        printf("Chose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.checkempty\n5.top\n6.exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter vale: ");
            scanf("%d", &x);
            push(x);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            printf("\n");
            break;
        }
        case 4:
        {
            isEmpty();
            break;
        }
        case 5:
        {
            printf("%d\n", curr());
            break;
        }
        case 6:
        {
            printf("Exiting....");
            exit(0);
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
            break;
        }
        };
    }
}