#include<stdio.h>

void sum(int a, int b, int c)
{
    printf("The sum is = %d\n", a+b+c);
}
void sub(int a, int b)
{
    printf("The subtraction is = %d\n", a-b);
}
int main()
{
    sum(10,20,30);
    sub(20,10);
    sum(100,200,500);
    sub(200,400);
}
