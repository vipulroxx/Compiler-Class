/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 2 : Write a C program to count characters, spaces, tabs and newlines in a file.
*/

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
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(filePointer);
    int spaces = 0, tabs = 0, newlines = 0, characters = 0;
    while (c != EOF)
    {
        characters = characters + 1;
        if (c == ' ')
        {
            spaces = spaces + 1;
	}
	else if (c == '\t')
        {
            tabs = tabs + 1;
        }
        else if (c == '\n')
        {
            newlines = newlines + 1;
        }
        else
        {
            
        }
        c = fgetc(filePointer);
    }
    printf("Number of characters in %s is : %d \n", fileName, characters);
    printf("Number of tabs in %s is : %d \n", fileName, tabs);
    printf("Number of spaces in %s is : %d \n", fileName, spaces);
    printf("Number of newlines in %s is : %d \n", fileName, newlines); 
    fclose(filePointer);
    return 0;
}
