 #include <stdio.h>
    int N, M,i,j,k;  
    int v[100];
    int w[100];
    int z[200]; 

main() {  
         printf("Enter array length of v (max 100): ");
         scanf("%d",&N);

         i=0;
         while (i<N){ 
           printf(" Enter number in position %d:",i);
           scanf("%d", &v[i]);    
           i++;
       }
           printf("Enter array length of w (max 100): ");
           scanf("%d",&M);

           j=0;
           while (j<M){ 
             printf(" Enter number in position %d:",j);
             scanf("%d", &w[j]);    
             j++;
          }

      for (i=0,j=0,k=0;i<N && j<M;k++) {
          if(v[i]<w[j]) {
            z[k]=v[i];
            i++;
          } else {
            z[k]=w[j];
            j++;
          }
      }
      if (j<M) {
        while(j<M) {
         z[k]=w[j];
         k++;j++;
        }
      } else 
      if (i<N) 
      {
         while(i<N) {
           z[k]=v[i];
           k++;i++;
        }
      }

      printf(" Merged array (array z):\n");
      for(k=0;k<M+N;k++) {
         printf("number in position %d: %d\n",k,z[k]);
      }
   }

