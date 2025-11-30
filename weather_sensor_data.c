#include <stdio.h>
int main()
{
    int a, p = 0, n = 0, z = 0;
    printf("enter number of readings: ");
    scanf("%d", &a);
    int b[a];

    printf("enter readings: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (b[i] > 0)
        {
            p++;
        }
        else if (b[i] < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    printf("positive = %d \n", p);
    printf("negative = %d \n", n);
    printf("zero = %d \n", z);
    return 0;
}