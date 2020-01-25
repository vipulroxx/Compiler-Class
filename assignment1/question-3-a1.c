/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 3 : Write a C program to copy the contents of a file into another file, character by character.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer, *targetPointer;
    char fileName[100], targetName[100], c;
    printf("Enter the filename to open \n");
    scanf("%s", fileName);
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    printf("Enter the name of target file \n");
    scanf("%s", targetName);
    targetPointer = fopen(targetName, "w");
    if (targetPointer == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(filePointer);
    while (c != EOF)
    {
        fputc(c, targetPointer);
        c = fgetc(filePointer);
    }
    printf("File copied successfully, \n");
    fclose(filePointer);
    fclose(targetPointer);
}
