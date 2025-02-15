#include<stdio.h>
int main()
{
    int a1[100], a2[100], n, i, a[100];

    printf("How mane numbers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Array1: ");

    for(i=0; i<n; i++)
    {
        printf("%d", a1[i]);
    }
    for(i=0; i<n; i++)
    {
         a2[i] = a1[i];
    }
    printf("\nArray2: ");

    for(i=0; i<n; i++)
    {
        printf("%d", a2[i]);
    }






}
