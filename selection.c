#include <stdio.h>
   int N,i,j;
   int imin,temp;  
   int arr[100]; 

   main() {  
    printf("Enter array length(max 100): ");
    scanf("%d",&N);
     i=0;
     while (i<N){ 
          printf(" Enter number in position %d:",i);
          scanf("%d", &arr[i]);    
          i++;
     }
       for(i=0;i<N-1;i++) {
          imin=i;

          for(j=i+1;j<N;j++) {
             if(arr[j]<arr[imin])
                 imin=j;
          }

          temp=arr[i];
          arr[i]=arr[imin];
          arr[imin]=temp;
      }

   printf(" Sorted array:\n");
      for(i=0;i<N;i++)
          printf("%d \n",arr[i]) ;
   }


