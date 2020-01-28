#include <stdio.h>
      int min;
      int max; 
      int N;
      int i;
      int arr[100];

      main() {  

      printf("Enter array length (max 100): ");
           scanf("%d",&N);
           i=0;
           while (i<N){ 
              printf(" Enter number in position %d:",i);
              scanf("%d", &arr[i]);    
              i++;
     }
   min=arr[0];
   max=arr[0];  
   for( i=1; i<N; i=i+1)
       {   
         if (arr[i]<min)
             min=arr[i];
         else if(arr[i]>max)
             max=arr[i];
       }
   printf("max: %d \n", max);
   printf("min: %d \n", min);
       }
   

