#include <stdio.h>
    int n, fattIterative, fattRecursive;
    int iterativeFactorial (int n) ;
    int recursiveFactorial (int n);

    main() { 
     printf("Insert n: ");
     scanf("%d",&n);     
     fattIterative = iterativeFactorial (n);
     fattRecursive = recursiveFactorial (n);
     printf("Iterative factorial: %d \n", fattIterative);
     printf("Recursive factorial: %d ", fattRecursive);
  }

int iterativeFactorial (int n) {
int i, fatt;
fatt = 1;
   if (n>1){
      for (i = 1; i <=n; i++){
         fatt = fatt * i;
      }
   }
return fatt;
}

int recursiveFactorial (int n) {
int fatt;

if (n == 0 || n == 1) fatt = 1;
else {
   int nn=n-1;
   fatt = n * recursiveFactorial (nn);
}

return fatt;
}

