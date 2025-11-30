#include <stdio.h>
void prime(int a)
{
    int c = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("Prime Number \n");
    }
    else
    {
        printf("Not prime \n");
    }
}
void even_odd(int a)
{
    if (a % 2 == 0)
    {
        printf("even number \n");
    }
    else
    {
        printf("Odd number \n");
    }
}
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    prime(a);
    even_odd(a);
    return 0;
}