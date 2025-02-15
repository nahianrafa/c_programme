#include<stdio.h>
int main(){
  int  marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  switch(marks)
  {
       case 0:
       case 1:
       case 2:
       case 3:
           printf("Fail\n");
           break;
       case 4:
            printf("C\n");
           break;
       case 5:
           printf("B-\n");
           break;
       case 6:
           printf("B+\n");
           break;
       case 7:
           printf("A-\n");
           break;
       case 8:
           printf("A\n");
           break;
       case 9:
       case 10:
            printf("A\n");
            break;
       default:
            printf("Error.");

  }

     return 0;

}
