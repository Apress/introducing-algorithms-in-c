#include <stdio.h>
#define MAX 2
int topIndex;
// PUSH FUNCTION 
void push (int stack[], int item)
{     
        topIndex++;
        stack [topIndex] = item;   
}
//POP FUNCTION
int pop (int stack[])
{
    int ret;    
        ret = stack [topIndex];
        topIndex--;   
    return ret;
}
//DISPLAY FUNCTION
void display (int stack[])
{
    int i;
    printf ("\nStack: ");
    if (topIndex == -1)
      printf ("empty");
    else
    {   
      for (i=topIndex; i>=0; --i)
          printf ("\n-------\n|%d   |\n------- ",stack[i]);               
    }
    printf ("\n");
}
//MAIN
void main()
{
    int stack [MAX], item;
    int choiceStack;
    topIndex = -1;	

    do
    {  
       do
       {
         //main menu
         printf ("\nChoose Operation:\n");
         printf ("\n1.Push");
         printf ("\n2.Pop");
         printf ("\n3.End Program\n");
         scanf  ("%d", &choiceStack);

         if (choiceStack<1 || choiceStack>3)
         printf ("\nInvalid Choice, Try again\n");
         }
       while (choiceStack<1 || choiceStack>3);

       switch (choiceStack)
       {
          case 1:
          if (topIndex == MAX-1) printf ("\nStack is FULL\n");
          else{
             printf ("\nEnter the Element to be pushed: \n");
             scanf  ("%d", &item);
             push (stack, item);
             display (stack);
            } 
            break;

          case 2:
          if (topIndex == -1) printf ("\nStack is EMPTY\n");
          else
          {
             item = pop (stack);
             printf ("\nThe Popped item is: %d",item);  
             display (stack);
          }

        break;

        default:
        printf ("\nEND OF EXECUTION\n");
      }
    }
   while (choiceStack != 3); 
}

