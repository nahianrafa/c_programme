#include<stdio.h>
int main()
{
    int rows, cols, i, j;
    printf("Enter number of the rows and cols:");
    scanf("%d%d", &rows, &cols);

    int a[rows][cols], transpose[cols][rows];
    printf("Enter elements of the matrix:\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &a[rows][cols]);
        }
        printf("\n");
    }
     for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
        printf("\n");
    }
     for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d", a[rows][cols]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
     for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d", transpose[j][i]);
        }
        printf("\n");
    }












}
