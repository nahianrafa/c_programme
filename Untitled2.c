#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);

    if(ch=='a' ||ch=='e'||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
    {
        printf("%c is a vowel.\n", ch);
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("%c is consonent.\n", ch);

    else
    {
        printf("%c is unexpected error.\n", ch);
    }
     return 0;




 return 0;

}
