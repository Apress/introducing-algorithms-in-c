#include <stdio.h>
   int N;
   int i;
   int sum;
   int number;

   main() {  
   printf("Enter how many number to add: ");
   scanf("%d",&N);
 
   for (i=0;i<N;i++){ 
      printf(" Enter number %d:",i+1);
      scanf("%d", &number);    
      sum = sum + number; 
    }
    printf("Sum: %d",sum); 
   }

