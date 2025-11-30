#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 2 number \n ");
    scanf(" %d %d", &a, &b);
    int c = a;
    int d = b;

    while (d != 0)
    {
        int t = d;
        d = c % d;
        c = t;
    }
    int x=c;
    int z = (a * b) / x;
    printf("GCD = %d \n", x);
    printf("LCM = %d", z);
    return 0;
}