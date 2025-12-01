
/*Problem Title: Amit’s Report Card
🧩 Problem Story:

Amit appeared in his first semester exams and got marks in several subjects.
He now wants to find his highest and lowest marks to understand his performance.

Help Amit by writing a program that finds the maximum and minimum marks from the list of marks he scored.

Task:

Write a program to read the marks of n subjects and print the highest and lowest marks.

🧠 Input Format:

The first line contains an integer n — the number of subjects.

The second line contains n space-separated integers representing Amit’s marks.

Output Format:

Print two lines in the following format:

Highest = maximum_marks
Lowest = minimum_marks

🧩 Example 1:

Input
6
45 78 56 89 92 66

Output
Highest = 92
Lowest = 45
Example 2:

Input
5
34 67 29 81 75

Output
Highest = 81
Lowest = 29*/


//code :
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