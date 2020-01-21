#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    char fileName[100], c;
    printf("Enter the filename to open \n");
    scanf("%s", fileName);
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL)
    {
        printf("Cannot file open \n");
        exit(0);
    }
    c = fgetc(filePointer);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(filePointer);
    }
    fclose(filePointer);
    return 0;
}
