#include <stdio.h>
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
   /*
   //Alternative for loop
       for (i=0; i<N; i++){
        printf(" Enter number in position %d:",i);
        scanf("%d", &arr[i]);
    }
   */
      printf("Numbers of the array:");
      for(i=0;i<N;i++) {
        printf("%d;", arr[i]);
      } 
   }

