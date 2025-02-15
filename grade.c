#include<stdio.h>
int main(){
 int marks;
 printf("Enter your marks=");
 scanf("%d", &marks);

 if(marks>=80 && marks<=100){
    printf("Its A+");
 }
  else if(marks>=70 && marks<79){
    printf("Its A");
 }
  else if(marks>=60 && marks<=69){
    printf("Its A-");
 }
  else if(marks>=50 && marks<=59){
    printf("Its B");
 }
  else if(marks>=33 && marks<=39){
    printf("Its C");
 }
  else if(marks>=0 && marks<=32){
    printf("Its Fail");
 }
 else{
    printf("Error");
 }

 return 0;





}
