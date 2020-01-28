/*
 Vipul Sharma
 1741012369
 CSC A
 Assignment 1
 Question 6 : Write a C program to read records from a file using structure.
 */

#include <stdio.h> 
#include <curses.h>
#include <stdlib.h> 
  
// struct person with 3 fields 
struct studentRecord  
{ 
    int studentRollNo;
    float studentPercentage;
    char studentName[20], studentAddress[20]; 
}; 
  
int main () 
{ 
    FILE *filePointer; 
    struct studentRecord s;
    char fileName[10]; 
    printf("Enter file name to read student records. \n");
    scanf("%s", fileName);
    filePointer = fopen(fileName, "r"); 
    if (filePointer == NULL) 
    { 
        fprintf(stderr, "\nError opening file\n"); 
        exit (1); 
    } 
      
    while (!feof(filePointer))
    {
        fscanf(filePointer, "%d", &s.studentRollNo);
        fscanf(filePointer, "%s", s.studentName);
        fscanf(filePointer, "%s", s.studentAddress);
        fscanf(filePointer, "%f", &s.studentPercentage);
        printf ("Student Roll Number = %d", s.studentRollNo);
        printf("\nStudent Name = %s", s.studentName);
        printf("\nStudent Address = %s", s.studentAddress);
        printf("\nStudent Percentage = %f \n", s.studentPercentage);
        exit(0);
        
    }
    fclose (filePointer); 
  
    return 0; 
} 
