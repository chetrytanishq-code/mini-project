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