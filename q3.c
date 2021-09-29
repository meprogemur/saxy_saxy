#include <stdio.h>
#include <stdlib.h>

struct stud
{
    int roll;
    int age;
    float cgpa;
    char subject[20];
};

int main()
{

    struct stud *s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i] = (struct stud *)malloc(sizeof(struct stud));
    }

    printf("details\n");
    for (int i = 0; i < 5; i++)
    {
        printf("enter roll: ");
        scanf("%d", &s[i]->roll);
        printf("\nenter age: ");
        scanf("%d", &s[i]->age);
        printf("\nenter cgpa: ");
        scanf("%f", &s[i]->cgpa);
        printf("\nenter subject: ");
        scanf("%s", s[i]->subject);
    }
    printf("print details\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nroll: %d", s[i]->roll);
        printf("\nage: %d", s[i]->age);
        printf("\ncgpa: %f", s[i]->cgpa);
        printf("\nsub: %s", s[i]->subject);
    }
    for (int i = 0; i < 5; i++)
    {
        free(s[i]);
    }
}