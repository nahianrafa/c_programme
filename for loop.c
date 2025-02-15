#include<stdio.h>
int main(){

    int num, i, sum= 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //for loop terminates when num is less than count
        for(i = 1; i <= num; ++i)
    {
        sum = sum + i;
    }

    printf("sum = %d", sum);

    return 0;

}
