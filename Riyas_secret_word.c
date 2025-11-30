#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int z = 0;
    printf("enter a word: ");
    scanf("%s", a);

    int b = strlen(a);
    for (int i = 0; i <= b / 2; i++)
    {
        if (a[i] != a[b - i - 1])
        {
            z++;
        }
    }
    if (z == 0)
    {
        printf("Perfect secret word");
    }
    else
    {
        printf("not a secret word");
    }
    return 0;
}