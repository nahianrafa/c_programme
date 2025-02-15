#include<stdio.h>
int main()
{
   int i, a[5], sum=0;
   printf("Enter your 5 numbers: ");

   for(i=0; i<5; i++)
   {
       scanf("%d", &a[i]);
   }

   for(i=0; i<5; i++)
   {
       sum = sum + a[i];
   }

   printf("The sum is = %d\n", sum);
   printf("Average= %.2f\n", (float)sum/5);








}
