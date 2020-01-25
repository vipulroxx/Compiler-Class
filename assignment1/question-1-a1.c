/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 1 : Write a C program to display contents of a file on screen.
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
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(filePointer);
    }
    fclose(filePointer);
    return 0;
}
