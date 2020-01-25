/*
Vipul Sharma
1741012369
CSC A
Assignment 1
Question 5 : Write a C program to write records to a file using structure.
*/

#include <stdio.h>
#include <curses.h>
#include <stdlib.h>

struct studentRecord
{
	int studentRollNo;
	float studentPercentage;
	char studentName[20], studentAddress[20];
};

int main()
{
	struct studentRecord s;
	FILE *filePointer;
	char c, fileName[10];
	printf("Enter the file name to write records. \n");
	scanf("%s", fileName);
	filePointer = fopen(fileName, "w");
	printf("Enter record of student : \n\n");
	printf("Enter student roll number : ");
	scanf("%d", &s.studentRollNo);
	printf("\nEnter student first name : ");
	scanf("%s", s.studentName);
	printf("\nEnter student address : ");
	scanf("%s", s.studentAddress);
	printf("\nEnter student percentage : ");
	scanf("%f", &s.studentPercentage);
	fprintf(filePointer, "%d\n%s\n%s\n%f", s.studentRollNo, s.studentName, s.studentAddress, s.studentPercentage);
	printf("\nRecord stored in file.");
	fclose(filePointer);
	return 0;
}
