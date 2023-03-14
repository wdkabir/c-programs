//A palindrome is a string that reads the same from left to right and right to left. Write a program to check a string for a palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, isPalindrome;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str) - 1;

    // Checking, if string is palindrome!
    isPalindrome = 1;
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Display result
    if (isPalindrome)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
