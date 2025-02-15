//program to add numbers until the user enters zero
#include<stdio.h>
int main(){
int number, sum = 0;

//the body of the loop is axecuted at least once
do{
    printf("enter your number: ");
    scanf("%d", &number);
    sum = sum + number;
}
while(number != 0);
pritnf("sum = %d", number);

return 0;
}
