#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter your number=");
    scanf("%d %d", &base, &height);

    area = 0.5 * base * height;

    printf("Area = %.2f\n", area);

    return 0;

}
