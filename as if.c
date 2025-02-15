//check wether an integer is odd or even
#include<stdio.h>
int main(){

int number;
printf("print an integer: ");
scanf("%d", &number);
//true if the reminder is 0
if (number%2 == 0)
{
printf("%d is an even integer.", number) ;
}
else
{
 printf("%d is an odd number.", number)   ;
}
return 0;
}
