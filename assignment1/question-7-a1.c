/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 7 : Write a C program to store every character type at the keyboard into a file. The procedure should come to an end as soon as the character '~' is hit from the keyboard.0
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    char fileName[10], c;
    printf("Enter the name of the file : \n");
    scanf("%s", fileName);
    filePointer = fopen(fileName, "a");
    if (filePointer == NULL)
    {
        printf("Error opening file \n");
        exit(0);
    }
    printf("Enter data to write to the file %s \n", fileName);
    c = getchar();
    while (c != '~')
    {
        putc(c, filePointer);
        c = getchar();
    }
    fclose(filePointer);
    exit(0);
}
