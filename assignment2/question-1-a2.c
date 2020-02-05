/*
Vipul Sharma
1741012369
CSC A
Assignment 2
Question 1 : Write a C program which will do the following tasks :
        a :  Randomly generate 10 numbers from the range 1 - 50 and store them to a file named 'source.txt'.
        b :  Store the numbers into an array from the file 'source.txt' and sort it using any sorting algorithm.
        c :  Copy the sorted array into a file named 'target.txt'.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    FILE *filePointer, *targetPointer;
    int i, randomArray[10];
    printf("Storing 10 numbers to 'source.txt'. \n");
	filePointer = fopen("source.txt", "w");
    for (i = 0; i < 10; i++)
    {
        randomArray[i] = rand() % 50;
        fprintf(filePointer, "%d\t", randomArray[i]);
    }
    fprintf(filePointer, "\n");
    printf("Storing the file into an array. \n");
    bubbleSort(randomArray, 10);
    printf("Copying the sorted array to 'target.txt'. \n");
    targetPointer = fopen("target.txt", "w");
    for (i = 0; i < 10; i++)
    {
        fprintf(targetPointer, "%d\t", randomArray[i]);
    }
    fprintf(targetPointer, "\n");
    fclose(filePointer);
    fclose(targetPointer);
    exit(0);
}