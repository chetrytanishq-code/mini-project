#include <stdio.h>
int main()
{
    int a;
    printf("enter number of subjects: ");
    scanf("%d", &a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("enter marks of subject %d : \n", i + 1);
        scanf("%d", &b[i]);
    }

    int h = b[0];
    int l = b[0];

    for (int i = 0; i < a; i++)
    {
        if (h < b[i])
        {
            h = b[i];
        }

        if (l > b[i])
        {
            l = b[i];
        }
    }
    printf("Highest = %d \n", h);
    printf("Lowest = %d ", l);
    return 0;
}