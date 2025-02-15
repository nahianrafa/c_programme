#include<stdio.h>
int main(){

int intType;
float floatTypr;
double doubleType;
char charType;

//sizeop evaluates the size of a variable
print("size of int: %zu bytes \n", sizeop (intType));
print("size of float: %zu bytes \n", sizeop (floatTypr));
print("size of double: %zu bytes \n", sizeop (doubleType));
print("size of char: %zu byte\n", sizeop (charType));

return 0;

}
