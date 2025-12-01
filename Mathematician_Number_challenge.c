/*Question 1: The Mathematician’s Number Challenge

Problem Story:
Riya, a young mathematician, loves playing with numbers. One day, she picks a number and wants to check two things:

Whether the number is prime or not.

Whether it is even or odd.
She wants your help to write a program that tells her both answers.
Task:
Write a program that takes an integer as input and:

Checks if it is a prime number or not.

Checks whether it is even or odd.

Input Format:
The first line contains one integer — the number to check.

Output Format:
Print two lines:
First line: "Prime Number" or "Not Prime"
Second line: "Even Number" or "Odd Number"


Example 1:
Input: 7
Output:
Prime Number
Odd Number

Example 2:
Input: 10
Output:
Not Prime
Even Number*/
//code : 

#include <stdio.h>
void prime(int a)
{
    int c = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("Prime Number \n");
    }
    else
    {
        printf("Not prime \n");
    }
}
void even_odd(int a)
{
    if (a % 2 == 0)
    {
        printf("even number \n");
    }
    else
    {
        printf("Odd number \n");
    }
}
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    prime(a);
    even_odd(a);
    return 0;
}