/*Question Title: “The College Topper in Every Subject”

Story:
At Assam Down Town University, the results for the semester exams have just been announced.
The marks of 5 students in 3 subjects — Mathematics, Physics, and Computer Science — are stored in a 2D array.

Each row of the array represents one student, and each column represents one subject.
The class teacher wants to identify the highest marks in each subject so that those students can receive academic excellence awards.

Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

Enter marks of 5 students in 3 subjects:

Student 1: 70 80 90
Student 2: 85 60 75
Student 3: 88 92 70
Student 4: 65 89 95
Student 5: 78 85 88

Highest marks in Mathematics: 88
Highest marks in Physics: 92
Highest marks in Computer Science: 95*/
//code :

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
