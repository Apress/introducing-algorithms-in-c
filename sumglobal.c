#include <stdio.h> 
//variable
int a,b,result1,result2;
//by value
int sumValue(int val1,int val2);
//by address
int sumAddress(int *val1,int *val2);

main()
{

printf("Enter a: ");
scanf("%d",&a); 
printf("Enter b: ");
scanf("%d",&b); 

result1 = sumValue(a,b); 
printf("Passing an argument by value: %d,%d \n",a,b);
printf("sumValue: %d\n", result1);

result2 = sumAddress(&a,&b); 
printf("Passing an argument by address: %d,%d \n",a,b);
printf("sumValue: %d\n", result2);
}

/*by value*/
int sumValue(int val1,int val2)
{
return(val1+val2); 
}
/*by address*/
int sumAddress(int *val1,int *val2)
{
return(*val1+*val2); 
}


            
