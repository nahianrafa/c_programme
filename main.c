//working at ssignment operators
#include<stdio.h>
int main(){

int a = 6,c;

c = a,      //c is 6
printf("c = %d \n", c);

c += a,      //c is 12
printf("c = %d \n", c);

c -= a,      //c is 6
printf("c = %d \n", c);

c *= a,      //c is 36
printf("c = %d \n", c);

c /= a,      //c is 6
printf("c = %d \n", c);

c %= a,      //c is 1
printf("c = %d \n", c);


return 0;

}
