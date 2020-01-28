#include <stdio.h> 
int N, i;
float arr[50], p, sum=0;
main() {
 p=0; 
 printf("Enter percentage : \n");
 scanf("%f",&p); //percentage of 50%

 printf("Enter array length(max 50):\n");
 scanf("%d", &N);  

 for (i=0; i<N; i++){
     printf("Enter number in position %d:",i);
     scanf("%f", & arr[i]);
  }

  for(i=0;i<N;i++) {
    arr[i]=(( arr[i]/100.0)*p);
    sum = sum + arr[i]; 
  }
    printf("Array with elements in reverse order:\n");
  for(i=N-1;i>=0;i--) {
    printf("%f \n", arr[i]);
  }

  printf("Sum = %f", sum); 
}

