//km-m distance

#include <stdio.h>
#include <stdlib.h>

struct distance
{
    float km;
    float m;
};

struct distance add(struct distance **ptr)
{
    struct distance temp;
    temp.km = (*ptr)[0].km + (*ptr)[1].km;
    temp.m = (*ptr)[0].m + (*ptr)[1].m;
    return temp;
}

void main()
{
    struct distance *d;
    int n = 2;
    d = (struct distance *)malloc(n * sizeof(struct distance));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter distance in km-m for distance %d: ", i + 1);
        scanf("%f%f", &d[i].km, &d[i].m);
    }
    add(&d);
    struct distance added = add(&d);
    printf("The added distance is: %.2f km %.2f m", added.km, added.m);
    free(d);
}