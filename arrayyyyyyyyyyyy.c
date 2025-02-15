#include<stdio.h>
int main()
{
   int rows, cols, i,j;
   printf("Enter your cols and rows:");

   int a[100] [100], b[100] [100], r[100] [100];
   scanf("%d%d", &rows, &cols );

   printf("Enter elements for A matrix:\n");

   for(i=0; i<rows; i++)
   {
       for(j=0; j<cols; j++)
       {
           printf("a[%d] [%d]=", i,j);
           scanf("%d", &a[i][j]);
       }
       printf("\n");
   }
   printf("A = ");
   for(i=0; i<rows; i++)
   {
       printf("\t");
       for(j=0; j<cols; j++)
       {
           printf(" %d ", a[i][j]);

       }
       printf("\n");
   }
   printf("Enter elements for B matrix:\n");
    for(i=0; i<rows; i++)
   {
       for(j=0; j<cols; j++)
       {
           printf("b[%d] [%d]=", i,j);
           scanf("%d", &b[i][j]);
       }
       printf("\n");
   }
   printf("B =");
   for(i=0; i<rows; i++)
   {
       printf("\t");
       for(j=0; j<cols; j++)
       {
           printf(" %d ", b[i][j]);

       }
       printf("\n");
   }
   for(i=0; i<rows; i++)
   {
       for(j=0; j<cols; j++)
       {
           r[i][j] = a[i][j] + b[i][j];

       }
   }
   printf("A + B = ");
   for(i=0; i<rows; i++)
   {
       printf("\t");
       for(j=0; j<cols; j++)
       {
           printf(" %d ", r[i][j]);

       }
       printf("\n");
       printf("\t");
   }







}
