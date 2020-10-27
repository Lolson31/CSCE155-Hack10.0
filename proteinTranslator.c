/**
 * Author: Luke Olson
 * Date: 10/26/2020
 *
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(int argc, char const *argv[])
 {
  //Check for errors
   if (argv[1] == NULL || argv[2] == NULL)
   {
     printf("Not enough inputs\n");
     exit (1);
   }

  //Create vars and open files
   FILE *read = fopen(argv[1], "r");
   FILE *write = fopen(argv[2], "w");
   int fileLength = 0;
   int currChar = 0;
   char c = fgetc (read);
   char DNA[1000];
   char splitCopy[1000];

 //Find out how long the sequence is, copy it to a string, and convert any Ts to Us
   while (c != EOF)
   {
     DNA[currChar] = c;
     if (DNA[currChar] = 'T')
     {
       DNA[currChar] = 'U';
     }

     currChar++;
     fileLength ++;
   }

  int splitCount = 0;
  int dnaCount = 0;

   for (int i = 0; i < ceil(fileLength / 3); i++)
   {
     for (int j = 0; j < 3; j++)
     {
       splitCopy[splitCount] = DNA[dnaCount];
       splitCount ++;
       dnaCount ++;
     }
     splitCount ++;
     splitCopy[splitCount] = ' ';
     splitCount ++;
   }

   printf("%s\n", splitCopy);

   return 0;
 }
