#include <stdio.h>
   int N,i,j;
   int temp;  
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

       for(i=0;i<N;i++) {
          for(j=N-1;j>i; j--) {
                if(arr[j]<arr[j-1]) {
                  temp=arr[j];
                  arr[j]=arr[j-1];
                  arr[j-1]= temp;
                }
          }
       }
       printf(" Sorted array:\n");
       for(i=0;i<N;i++)
          printf("%d\n",arr[i]);
   }

