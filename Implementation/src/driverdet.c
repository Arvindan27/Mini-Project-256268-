// C program for writing 
// struct to file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
// a struct to read and write
struct person 
{
    int id;
    char name[20];
    char start[20];
    char end[20];
    char avail[20];

}pr;
void driverdet()
{
    FILE *outfile;
    // open file for writing
    outfile = fopen ("Person.txt", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit (1);
    }
    printf("enter name\n");
    scanf(" %s",pr.name);
    printf("enter start location between a to z\n");
    scanf(" %s",pr.start);
    printf("enter end location between a to z\n");
    scanf(" %s",pr.end);
    printf("enter availabilty\n");
    scanf(" %s",pr.avail);  
    // write struct to file
    fwrite (&pr, sizeof(struct person), 1, outfile);
    //fwrite (&input2, sizeof(struct person), 1, outfile);
      
    if(fwrite != 0) 
        printf("contents to file written successfully !\n");
    else 
        printf("error writing file !\n");
  
    // close file
    fclose (outfile);
  
}