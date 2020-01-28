#include <stdio.h>
   int N;
   int i;
   int sum;
   int number;

   main() {  
   printf("Enter how many number to add: ");
   scanf("%d",&N);

   i=0;
   while (i<N){ 
      printf(" Enter number %d:",i+1);
      scanf("%d", &number);    
      sum = sum + number;
      i++;
    }
    printf("Sum: %d",sum); 
}

