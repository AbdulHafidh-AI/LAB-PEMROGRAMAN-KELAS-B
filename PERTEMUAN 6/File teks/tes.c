#include <stdio.h>
#include <stdlib.h>


int main () {
   char str1[50], str2[10], str3[10];
   int year;
   FILE * fp;

   fp = fopen ("puisi.txt", "w+");
   fputs("We are in 2012", fp);
   
   rewind(fp);
   fscanf(fp, "%[^\n]s %d", str1,&year);
   
   printf("Read String1 |%s|\n", str1 );
   printf("Read Integer |%d|\n", year );

   fclose(fp);
   
   return(0);
}