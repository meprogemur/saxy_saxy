//lcf hcf gcd

#include <stdio.h>

int lcm(int a, int b)
{
    static int temp = 1;
    if (temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a, b);
        return temp;
    }
}

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int main()
{
    int c, x, y;
    printf("Enter case:(1 for lcm, 2 for hcf, 3 for gcd) ");
    scanf("%d", &c);
    printf("Enter two positive integer: ");
    scanf("%d %d", &x, &y);
    switch (c)
    {
    case 1:
        printf("LCM = %d", lcm(x, y));
        break;
    case 2:
        printf("HCF = %d", hcf(x, y));
        break;
    case 3:
        printf("GCD = %d", gcd(x, y));
    default:
        break;
    }
}