 #include <stdio.h>
      int N;
      int i; 
      int search_key;
      typedef int bool;
        #define true 1
        #define false 0
      bool found;
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
   printf("Enter the search_key: ");
   scanf("%d",&search_key);

   found=false;
   for(i=0; i<N && found==false; i++) {
     if (arr[i]==search_key) {
     found =true;
     printf("search key is in position: %d \n",i);
     }
   }
  if (found ==false) {
    printf("the search key was not found in the array");
    }
}

