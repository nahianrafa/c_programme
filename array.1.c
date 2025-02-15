#include<stdio.h>
int main()
{
 int a[5] ,sum, i;
 printf("Enter your 5 numbers :");
 for(i=0; i<5; i++)
 {
     scanf("%d", &a[i]);
 }

 for(i=0; i<5; i++)
 {
     sum = sum+a[i];
 }

 printf("The sum is :%d\n", sum);
 printf("The average number :%.2f\n",(float)sum/5);


}
