#include <stdio.h>
void area(int a, int b)
{
    int c = a * b;
    printf("area of the rectangle is: %d \n", c);
}
void perimeter(int a, int b)
{
    int z = 2 * (a + b);
    printf("perimeter of the rectangle is: %d \n", z);
}
int main()
{
    int a, c;
    printf("enter width :");
    scanf("%d", &a);
    printf("enter length :");
    scanf("%d", &c);
    area(a, c);
    perimeter(a, c);
    return 0;
}