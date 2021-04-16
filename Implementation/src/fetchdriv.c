// C program for reading 
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include "test.h"
  
// struct person with 3 fields
typedef struct person 
{
    int id;
    char name[20];
    char start[20];
    char end[20];
    char avail[20];
}pers;
  
// Driver program
int fetchdriv (char s,char e)
{
    //function to fetch driver details from the file stored and check is passsenger route lies in drivers route and availability.

    pers pr;
    FILE *infile;
      
    // Open person.dat for reading
    infile = fopen ("Person.txt", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
      
    // read file contents till end of file
    while(fread(&pr, sizeof(struct person), 1, infile))
        printf ("name = %s start= %s end= %s availablity=%s\n", pr.name,pr.start,pr.end,pr.avail);
    if(s>=pr.start[0] && s<=pr.end[0] && e>=pr.start[0] & e<pr.end[0]){
        return 1;
    }
    else{
        return 0;
    }
    // close file
    fclose (infile);
    //return 0 ;//(pr.start,pr.end,pr.avail);
}