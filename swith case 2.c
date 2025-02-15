#include<stdio.h>
int main(){
   int time;

   printf("Enter your time: ");
   scanf("%d", &time);

   switch(time)
   {
  case 1:
    printf("Good morning.");
    break;
  case 2:
    printf("Good evening.");
    break;
  case 3:
    printf("Good noon.");
    break;
  case 4:
    printf("See you next time.");
    break;
  default:
    printf("Error.");

   }

    return 0;

}
