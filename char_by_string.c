//Take input the name of the user reading character by character and make it a string.  Display the name preceded by the string “Your name is:”.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char ch;
    int i = 0;

    // Input name character by character
    printf("Enter your name character by character:\n");
    while ((ch = getchar()) != '\n')
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    // Display name with prefix
    printf("Your name is: %s\n", name);

    return 0;
}
