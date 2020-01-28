#include <stdio.h>
int num, fibRecursive, fibArray, fibVariable;
int n_instruction, n_assignment;
int fibonacciRecursive (int n) ;
int fibonacciArray (int n);
int fibonacciVariable (int n);

    main() { 
     printf("Insert number: ");
     scanf("%d",&num);
     

n_instruction = 0;
n_assignment = 0;
fibRecursive = fibonacciRecursive (num);
printf("\nFibonacci number recursive: %d \n", fibRecursive);
printf("n_instruction: %d \n", n_instruction);
printf("n_assignment: %d \n", n_assignment);


n_instruction = 0;
n_assignment = 0;
fibArray = fibonacciArray (num);
printf("\nFibonacci number with array: %d \n", fibArray);
printf("n_instruction: %d \n", n_instruction);
printf("n_assignment: %d \n", n_assignment);


n_instruction = 0;
n_assignment = 0;
fibVariable = fibonacciVariable (num);
printf("\nFibonacci number with variable: %d \n", fibVariable);
printf("n_instruction: %d \n", n_instruction);
printf("n_assignment: %d \n", n_assignment);

  }

int fibonacciRecursive(int n)
{
int fibonacci;

//test instruction    
n_instruction++; 
if (n<= 2) { 
    n_assignment++;
    fibonacci=1;    
}
else { 
    n_assignment++;
    //a sum
    n_instruction++;
    fibonacci= fibonacciRecursive(n-1) + fibonacciRecursive (n-2);
}
return fibonacci;  
}

int  fibonacciArray (int n)   {
  int fibonacci;
  int fibonacciArr[100];
  int i;
 
 
  if (n==1){
   //test instruction 
   n_instruction++;  
   n_assignment++;
   fibonacci =1;
  }
  
  if (n==2){
   //test instruction 
   n_instruction++; 
   n_assignment++;  
   fibonacci =1;
  }
  
  if (n>2){
  //test instruction 
  n_instruction++; 
  //three assignment: i=3; fibonacci [2]=1; fibonacci [1]=1
  n_assignment=n_assignment+3;
  fibonacciArr [1]=1;
  fibonacciArr [2]=1;
  
  for (i = 3; i<= n ;i++)   {  	
       //increment of index i and final test
       n_assignment=n_assignment+2;  
       
         //a sum
       n_instruction++;
        
       n_assignment++;  

             fibonacciArr [i] = fibonacciArr [i-1] + fibonacciArr [i-2];
      }       
        //an assignment  
      n_assignment++; 
      fibonacci=    fibonacciArr [n]; 
  }
 return fibonacci ;       
}

int  fibonacciVariable (int n)   {   
  int i,a,b,c;
  int fibonacci;

  if (n==1){
   //test instruction 
   n_instruction++;  
   n_assignment++;
   fibonacci =1;
  }
  
  if (n==2){
   //test instruction 
   n_instruction++; 
   n_assignment++;  
   fibonacci =1;
  }
  
  if (n>2){
  //test instruction 
  n_instruction++; 
  //three assignment: i=3; a=1; b=1
  n_assignment=n_assignment+3;
  a=1;
  b=1;  
   
      for (i = 3; i<= n ;i++) 
      {
     //increment of index i and final test
       n_assignment=n_assignment+2; 

          c = a+ b;
          a = b;
          b=c;
          //a sum
          n_instruction++;
         //three assignment for the switch
         n_assignment= n_assignment+3;  
      }  
      n_assignment++; 
      fibonacci=c;
}
  return fibonacci;
}
