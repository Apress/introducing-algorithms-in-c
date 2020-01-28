#include <stdio.h>
   int N;
   int i;
   int sum;
   int temp number

   main() {  
   printf("Enter how many number to add: ");
   scanf("%d",&N);

   i=0;
   do{ 
      printf(" Enter number %d:",i+1);
      scanf("%d", &number);    
      sum = sum + number;
      i++;
    } while (i<N);
    printf("Sum: %d",sum); 
}

