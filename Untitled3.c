#include<stdio.h>
int main()
{
    int n, count, sum=0;
     printf("Enter number of terms: ");
     scanf("%d", &n);

     printf("The odd numbers are: ");

     for(int i =0, count = 0; count<n; count = i+2 )
     {
         printf("%d", i);
         sum = count+i;
         count++;
     }
     printf("The sum of odd number upto 10 terms: %d\n", sum);

     return 0;



}
