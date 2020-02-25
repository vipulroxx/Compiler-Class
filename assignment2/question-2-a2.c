/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 2 : Write a C program to read a text file "input.txt" containing a sparse matrix in a compact form shown below and
             write the sparse matrix into a file "output.txt" in expanded form.
             Eg. 5 5 4      0 0 0 2 0
                 0 3 2      0 5 0 0 0
                 1 1 5      0 0 0 0 0
                 3 2 4      0 0 4 0 0
                 4 4 7      0 0 0 0 7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer, *targetPointer;
    char c;
    int size, row,  column;
    filePointer = fopen("input.txt", "r");
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
        if (c == '\n')
            size++;
    }
    targetPointer = fopen("output.txt", "w");
    for (row = 0; row < size; row++)
    {
        for (column = 0; column < size; column++)
        {
            fprintf(targetPointer, "%d ", 0);
        }
        fprintf(targetPointer, "\n");
    }
    fclose(filePointer);
    exit(0);
}