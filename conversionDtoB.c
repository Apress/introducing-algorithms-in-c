#include <stdio.h>
 int N;
 int i;
 int v[8]; 
 int quotient;

 main() {
   //initializing an array
   for (i=0; i<8; i++) v[i]=0;

   //reading the number to convert
   printf("Enter an integer number N (0<N<255): ");
   scanf("%d",&N);
   if (N<0  ||  N>255)  { 
      while (N<0 || N>255){ 
         printf("Enter an integer number N (0<N<255): ");
         scanf("%d",&N);
      }
   }

   i=0;
   while (N!=0) {
   v[i]=N%2;
   //optional printing of the reminder = v[i]
   printf("v[%d]:%d;\n", i, v[i]);
   //N become the reminder
   N=N/2;
   //optional printing of the quotient
   printf("quotient:%d;\n", N);
   i++;
   }

   printf("Result array:\n");
   for(i=7;i>=0;i--) { 
     printf("%d", v[i]);
   }
}

