#include <stdio.h>
void even_odd(int a)
{
    if (a % 2 == 0)
    {
        printf("even number \n");
    }
    else
    {
        printf("odd number \n");
    }
}
void Divisibility(int a)
{
    if (a % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
}
int main()
{
    int b;
    printf("Enter a number : ");
    scanf("%d", &b);
    even_odd(b);
    Divisibility(b);
    return 0;
}