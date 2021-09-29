#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    int age;
    float cgpa;
    char sub[25];
};

void main()
{
    int n, large;
    struct student *p;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    p = (struct student *)malloc(n * sizeof(struct student)); //(struct student*)calloc(n,sizeof(struct student))
    for (int i = 0; i < n; i++)
    {
        printf("Details of student %d\n", i + 1);
        printf("\nEnter the roll of student: ");
        scanf("%d", &(p + i)->roll);
        printf("Enter the age of student: ");
        scanf("%d", &(p + i)->age);
        printf("Enter the cgpa of student: ");
        scanf("%f", &(p + i)->cgpa);
        printf("Enter the subject of student: ");
        scanf(" %[^\n]%*c", (p + i)->sub);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Roll of student: %d\n", p[i].roll);
        printf("Age of student: %d\n", p[i].age);
        printf("CGPA of student: %.2f\n", p[i].cgpa);
        printf("Subject of student: %s\n\n", p[i].sub);
    }
    free(p);
}