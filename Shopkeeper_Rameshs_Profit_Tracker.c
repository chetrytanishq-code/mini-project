#include <stdio.h>

int main()
{
    int a;
    printf("enter number of days: ");
    scanf("%d", &a);

    int b[a];
    int x = 0, y = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);

        if (b[i] > 0)
        {
            x += b[i];
    }
        else
        {
            y += b[i];
        }
        
        int z = x - y;

        printf("Total Profit: %d\n", x);
        printf("Total Loss: %d\n", y);
        printf("Net Balance: %d\n", z);

        return 0;
    }
}
