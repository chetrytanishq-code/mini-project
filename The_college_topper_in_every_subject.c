#include <stdio.h>

int main()
{
    int a[5][3];
    int i, j;

    printf("enter marks of the students: \n");
    for (i = 0; i < 5; i++)
    {
        printf("enter marks of student %d: ",i+1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x = a[0][0];
    int y = a[0][1];
    int z = a[0][2];

    for (i = 1; i < 5; i++)
    {
        if (a[i][0] > x)
            x = a[i][0];

        if (a[i][1] > y)
            y = a[i][1];

        if (a[i][2] > z)
            z = a[i][2];
    }

    printf("Highest marks in Mathematics: %d\n", x);
    printf("Highest marks in Physics: %d\n", y);
    printf("Highest marks in Computer Science: %d\n", z);

    return 0;
}
