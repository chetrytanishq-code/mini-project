#include <stdio.h>

int main()
{
    int A[10][7];
    int i, j;

    printf("enter attendence of students: \n");
    for (i = 0; i < 10; i++)

    {
        printf("enter attendence of student %d: ", i + 1);
        for (j = 0; j < 7; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int tp[10] = {0};
    int dt[7] = {0};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            tp[i] += A[i][j];
            dt[j] += A[i][j];
        }
    }

    int max = tp[0];
    int t = 1;

    for (i = 1; i < 10; i++)
    {
        if (tp[i] > max)
        {
            max = tp[i];
            t = i + 1;
        }
    }

    int min = dt[0];
    int l = 1;

    for (j = 1; j < 7; j++)
    {
        if (dt[j] < min)
        {
            min = dt[j];
            l = j + 1;
        }
    }

    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d: %d\n", i + 1, tp[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           t, max);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", l);

    return 0;
}