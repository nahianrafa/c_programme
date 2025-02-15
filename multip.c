#include<stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter your number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
       sum = sum*i;
    }



    printf("The sum is = %d", sum);






}
