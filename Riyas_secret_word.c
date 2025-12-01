/*Problem Title: Riya’s Secret Word
🧩 Problem Story:

Riya loves creating secret words.
She calls a word “Perfect Secret Word” if it reads the same forward and backward.

For example, words like madam, noon, and level are her favorites because they look the same from both sides!

Now, she wants your help to check whether her word is a Perfect Secret Word or not.

Your Task:

Write a program that takes a string as input and prints:

"Perfect Secret Word" — if the string is a palindrome.

"Not a Secret Word" — if it is not.

Input Format:

A single word (string) entered by the user.

📤 Output Format:

A single line of text:
Either "Perfect Secret Word" or "Not a Secret Word"*/
//code :
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