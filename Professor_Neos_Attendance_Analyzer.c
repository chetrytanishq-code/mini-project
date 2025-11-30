#include <stdio.h>

int main()
{
    int a;
    printf("enter number of students: ");
    scanf("%d", &a);

    int b[a];
    int x = 0, y = 0;

    printf("enter attendence: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);

        if (b[i] == 1)
            x++;
        else
            y++;
    }

    printf("total number of students present: %d\n", x);
    printf("total number of students absent: %d\n", y);

    return 0;
}
