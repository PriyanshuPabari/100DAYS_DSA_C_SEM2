#include <stdio.h>

int main()
{
    char s[200];
    int len = 0;

    scanf("%s", s);

    while (s[len] != '\0')
    {
        len++;
    }

    int left = 0;
    int right = len - 1;
    int isPalindrome = 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}