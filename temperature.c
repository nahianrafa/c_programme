#include <stdio.h>
int main() {
int choice; // Variable to track the user's selected conversion option
float temp, result; // Variables to store the input temperature and the calculated result
// Begin a loop that allows the user to perform conversions repeatedly
do {
// Print the temperature conversion options for the user
printf("\nTemperature Conversion:\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("3. Celsius to Kelvin\n");
printf("4. Kelvin to Celsius\n");
printf("5. Fahrenheit to Kelvin\n");
printf("6. Kelvin to Fahrenheit\n");
printf("7. Exit\n");
// Ask the user to choose a conversion type
printf("Enter choice (1-7) = ");
scanf("%d", &choice); // Capture the user's choice
// Process the user's choice using a switch statement
switch (choice) {
case 1:
// Convert Celsius to Fahrenheit
printf("Enter temp in Celsius: ");
scanf("%f", &temp); // Get temperature from user
result = (temp * 9.0 / 5.0) + 32; // Perform the conversion calculation
printf("%.2f Celsius = %.2f Fahrenheit\n", temp, result); // Display the result
break;
case 2:
// Convert Fahrenheit to Celsius
printf("Enter temp in Fahrenheit: ");
scanf("%f", &temp); // Get temperature from user
result = (temp - 32) * 5.0 / 9.0; // Perform the conversion calculation
printf("%.2f Fahrenheit = %.2f Celsius\n", temp, result); // Display the result
break;
case 3:
// Convert Celsius to Kelvin
printf("Enter temp in Celsius: ");
scanf("%f", &temp); // Get temperature from user
result = temp + 273.15; // Perform the conversion calculation
printf("%.2f Celsius = %.2f Kelvin\n", temp, result); // Display the result
break;
case 4:
// Convert Kelvin to Celsius
printf("Enter temp in Kelvin: ");
scanf("%f", &temp); // Get temperature from user
result = temp - 273.15; // Perform the conversion calculation
printf("%.2f Kelvin = %.2f Celsius\n", temp, result); // Display the result
break;
case 5:
// Convert Fahrenheit to Kelvin
printf("Enter temp in Fahrenheit: ");
scanf("%f", &temp); // Get temperature from user
result = ((temp - 32) * 5.0 / 9.0) + 273.15; // Perform the conversion calculation
printf("%.2f Fahrenheit = %.2f Kelvin\n", temp, result); // Display the result
break;
case 6:
// Convert Kelvin to Fahrenheit
printf("Enter temp in Kelvin: ");
scanf("%f", &temp); // Get temperature from user
result = ((temp - 273.15) * 9.0 / 5.0) + 32; // Perform the conversion calculation
printf("%.2f Kelvin = %.2f Fahrenheit\n", temp, result); // Display the result
break;
case 7:
// Provide a clean exit for the user
printf("Exiting the program.\n");
break;
default:
// Inform the user if an invalid option was selected
printf("Invalid Choice. Please try again.\n");
}
} while (choice != 7); // Continue looping until the exit option is chosen
return 0;
}
