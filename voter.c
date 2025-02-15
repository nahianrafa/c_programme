#include<stdio.h>
int main(){
int age;

printf("Enter your age: ");
scanf("%d", &age);

if(age>=18 && age<=140){
    printf("Voter");
}
else if(age<=17){
     printf("Not a nVoter");
}
else{
     printf("Error");
}

return 0;



}
