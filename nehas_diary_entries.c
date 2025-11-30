#include <stdio.h>
int main()
{
    int a;
    printf("enter number of days: ");
    scanf("%d", &a);

    int b[a];
    printf("enter exercise time: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d \t", b[i]);
    }
    return 0;
}