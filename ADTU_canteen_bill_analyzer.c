/***Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200
Student 2 total: ₹110
Student 3 total: ₹200
Student 4 total: ₹90

Highest collection on Day 2
Highest spender: Student 1 and Student 3*/



//code : 
#include <stdio.h>

int main() {
    int n, m;
    printf("enter number of students and number of days: ");
    scanf("%d %d", &n, &m);

    int b[n][m];

    printf("enter the bills: \n");
    for (int i = 0; i < n; i++) {
        printf("enter the bill of student %d: ",i+1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int st[n];
    int dt[m];

    
    for (int i = 0; i < n; i++)
        st[i] = 0;

    for (int j = 0; j < m; j++)
        dt[j] = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            st[i] += b[i][j];
            dt[j] += b[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, st[i]);
    }

    
    int maxD = 0;
    for (int j = 1; j < m; j++) {
        if (dt[j] > dt[maxD])
            maxD = j;
    }

    printf("\nHighest collection on Day %d\n", maxD + 1);

    
    int maxS= 0;
    for (int i = 1; i < n; i++) {
        if (st[i] > st[maxS])
            maxS= i;
    }

    
    printf("Highest spender: Student %d", maxS + 1);

    for (int i = 0; i < n; i++) {
        if (i != maxS&& st[i] == st[maxS]) {
            printf(" and Student %d", i + 1);
        }
    }

    return 0;
}
