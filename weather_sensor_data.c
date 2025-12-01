/*Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥 Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1*/
// code:

#include <stdio.h>
int main()
{
    int a, p = 0, n = 0, z = 0;
    printf("enter number of readings: ");
    scanf("%d", &a);
    int b[a];

    printf("enter readings: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (b[i] > 0)
        {
            p++;
        }
        else if (b[i] < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    printf("positive = %d \n", p);
    printf("negative = %d \n", n);
    printf("zero = %d \n", z);
    return 0;
}