#include<stdio.h>
int main()
{
    int i, j;

    for(i=1; i<=3; i++){
        for(j=2; j>=1; j--){
            printf("i = %d\t  j = %d\n", i, j);
        }
    }

       return 0;

}
