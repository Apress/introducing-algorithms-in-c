#include <stdio.h>
   int N,i;
   int lft, rig, mdl, pos; 
   int search_key;
   int arr[100];  

  main() {  
   printf("Enter array length (max 100): ");
     scanf("%d",&N);
      i=0;
      while (i<N){ 
        printf("Enter number in position %d:",i);
        scanf("%d", &arr[i]);    
        i++;
      }
   printf("Enter the search_key: ");
   scanf("%d",&search_key);

   lft=0;
   rig=N-1;
   pos=-1;
   while(lft<=rig && pos==-1)
   {
      mdl=(lft+rig+1)/2;
      if(arr[mdl]== search_key)
           pos=mdl;
      else
      {
         if(search_key<arr[mdl])
         rig=mdl-1;
         else
         lft=mdl+1;
      }
   }
   if(pos!=-1)
     printf("search key is in position: %d \n", pos);
   else
     printf("the search key was not found in the array");
   }

