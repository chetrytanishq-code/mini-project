/*Question: The Student’s Marks Analyzer

💡 Problem Story:
A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:

The total marks obtained by all students.

The average marks of the class.

Can you help the teacher by writing the program?
Task:

Write a program that takes the number of students and their marks as input and calculates:

The total marks

The average marks

Input Format:

The first line contains one integer n — number of students.

The next line contains n integers — marks of each student.

📤 Output Format:

Print two lines:

First line: "Total Marks = <value>"

Second line: "Average Marks = <value>"
Example 1:

Input:
5
80 70 90 85 75

Output:
Total Marks = 400
Average Marks = 80.00*/
//code :

#include <stdio.h>
int main()
{
    int a, s = 0;
    printf("enter number of students \n");
    scanf("%d", &a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        printf("enter marks of student %d :", i+1);
        scanf("%d", &b[i]);
        s += b[i];
    }
    int avg = s / a;

    printf("Total marks= %d \n", s);
    printf("Average marks= %d", avg);
    return 0;
}