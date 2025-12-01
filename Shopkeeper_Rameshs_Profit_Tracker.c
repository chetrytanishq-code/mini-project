/*Problem Title: Shopkeeper Ramesh’s Profit Tracker 💰
🧩 Story:

Ramesh owns a small grocery shop in his town.
He keeps a record of his daily profit or loss for a week in an array.

If the value is positive, it means he made a profit that day.

If the value is negative, it means he had a loss that day.

At the end of the week, Ramesh wants to know:

His total profit (sum of all positive values)

His total loss (sum of all negative values, as a positive number)

His net balance (profit + loss, considering signs)

Help Ramesh write a program to calculate these values.

Problem Statement:

Given an array records[] of size n, where each element represents the daily profit or loss,
find and print the total profit, total loss, and net balance.

Input Format:

The first line contains an integer n — number of days.

The second line contains n space-separated integers representing profit or loss on each day.

Output Format:

Print three lines:

Total Profit: X
Total Loss: Y
Net Balance: Z


Where:

X → sum of all positive numbers

Y → sum of all negative numbers converted to positive value

Z → X − Y*/
//code: 

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
