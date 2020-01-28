#include <stdio.h>
   int M=100; 
   void read(FILE *in,char textFile[M]) ;
   void write (char textFile[M]);

   main(){    
      FILE *fil;
      char textFile[M];
      fil = fopen("dat.txt","r");
      printf("file of char:\n");
      while (!feof(fil)){ 
          read (fil,textFile);  
          write (textFile) ;
           }
      }
      void read (FILE *in,char textFile[M]){
         fscanf(in,"%s",textFile);
          }
      void write (char textFile[M]){
         printf("%s\n",textFile) ;     
          }

