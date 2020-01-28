/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 8 : Write a C program to remove all blank spaces from a file.
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
    printf("Enter the filename to write after removing all blank spaces from the file %s \n", targetName);
    scanf("%s", targetName);
    targetPointer = fopen(targetName, "w+");
    if (targetPointer == NULL)
    {
        printf("Cannot write file \n");
        exit(0);
    }
    fscanf(filePointer, "%c", &c);
    while (!feof(filePointer))
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            fprintf(targetPointer, "%c", c);
        }
        fscanf(filePointer, "%c", &c);
    }
    exit(0);
}
