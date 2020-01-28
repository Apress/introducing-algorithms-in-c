#include <stdio.h> 
//variable
int a,result1,result2;
//by value
int modValue(int val1);
//by address
int modAddress(int *val1);

main()
{

printf("Enter a: ");
scanf("%d",&a); 

result1 = modValue(a); 
printf("Passing an argument by value: %d \n",a);
printf("modValue: %d\n", result1);

result2 = modAddress(&a); 
printf("Passing an argument by address: %d \n",a);
printf("modValue: %d\n", result2);

}

/*by value*/
int modValue(int val1)
{
	val1=val1+5;
    return(val1); 
}
/*by address*/
int modAddress(int *val1)
{
    *val1=*val1+5;
    return(*val1);  
}

