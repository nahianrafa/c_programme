#include<stdio.h>
int main(){
float b;
int a;
printf("Enter a number");
scanf("%f", &b);
a= (int)b;
if(b<0){
if(a%2==0)
printf("The number is nagetive and even");
else
printf("the number is odd and nagetive");
}
else if(b>0){
if(a%2==0)
printf("The number is positive and even");
else
printf("the number is odd and nagetive");
}
else
printf("The number is 0");
return 0;
}
