/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 4 : Write a C program to receive strings from keyboard and write them to a file.
*/

#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

int main()
{
	FILE *filePointer;
	char c, fileName[10];
	printf("Enter file name \n");
	scanf("%s", fileName);
	filePointer = fopen(fileName, "w");
	if (filePointer == NULL)
	{
		printf("File could not open.");
		exit(0);
	}
	printf("Enter data to write to the file or enter * to exit \n");
	while(1)
	{
		scanf(" %c", &c); 
		if (c == '*')
			exit(0);
		putc(c, filePointer);
	}
	fclose(filePointer);
}
