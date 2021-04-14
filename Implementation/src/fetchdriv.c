// C program for reading 
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
  
// struct person with 3 fields
struct person 
{
    int id;
    char name[20];
    char start[20];
    char end[20];
    char avail[20];
}pr;
  
// Driver program
int fetchdriv (char s,char e)
{
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
        printf ("name = %s start= %s end=%s availablity=%s\n", pr.name,pr.start,pr.end,pr.avail);
  
    // close file
    fclose (infile);
    if( pr.start[0]<=s<=pr.end[0] && pr.start[0]<=e<=pr.end[0]){
       return 1;
    }else{
        return 0;
    }
    //return 0 ;//(pr.start,pr.end,pr.avail);
}