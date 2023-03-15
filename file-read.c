#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100], c;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("The contents of the file are:\n");

    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }

    fclose(file);

    return 0;
}

