#include <stdio.h>
int main()
{
    float b;
    printf("enter temperature in celsius : ");
    scanf("%f", &b);

    float c = (b * 9 / 5) + 32;
    printf(" Temperature in fehrenheit is : %.2f ", c);
    return 0;
}