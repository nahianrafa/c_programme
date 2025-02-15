#include<stdio.h>
int main()
{
   int num1, num2;
   printf("Enter two number=") ;
   scanf("%d %d", &num1, &num2);

   if(num1>num2)
     printf("Large number");

   else if(num1<num2)
     printf("Small number");

   else
     printf("Numbr is equal");

   return 0;




}
