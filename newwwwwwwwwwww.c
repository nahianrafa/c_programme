#include<stdio.h>
int main()
{
    int n,i, a[100];
    printf("Enter your elements numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for(i=0; i<n; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("the maximum num is = %d\n", max);
    printf("the minimum num is = %d", min);


}
