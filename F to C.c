#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter your Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) /1.8;
    printf("Celcius = %.2f", C);



}
