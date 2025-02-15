
#include <stdio.h>
#include <stdbool.h> // To use boolean values (true/false)
int main() {
int num;
bool isPrime = true;
// Ask the user to enter an integer
printf("Enter an integer: ");
scanf("%d", &num);
// Determine if the number is positive, negative, or zero
if (num > 0) {
printf("The number is positive.\n");
} else if (num < 0) {
printf("The number is negative.\n");
} else {
printf("The number is zero.\n");
}
// Determine if the number is odd or even
if (num % 2 == 0) {
printf("The number is even.\n");
} else {
printf("The number is odd.\n");
}
// Check if the number is prime (prime numbers are greater than 1)
if (num <= 1) {
isPrime = false; // 0 and 1 are not prime numbers
} else {
for (int i = 2; i <= num / 2; i++) {
if (num % i == 0) {
isPrime = false;
break; // Exit the loop if a divisor is found
}
}
}
// Output the result for prime check
if (isPrime) {
printf("The number is a prime number.\n");
} else {
printf("The number is not a prime number.\n");
}
return 0;

}
