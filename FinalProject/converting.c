#include "converting.h"

void converting() {
/* Version 1 */
    printf("*** Start of Converting Strings to int Demo ***\n");  // Prints out the start of the program
    char int_string[80]; // Declares the int_string array
    int int_number;   // Declares the int_number variable

    while (TRUE) { // While loop to keep the program running

        printf("Type the int numeric string (q - to quit):\n");
        gets(int_string); // Gets the string from the user
        if (strcmp(int_string, "q") == 0) break; // If the user types q, the program will break out of the loop
        int_number = atoi(int_string);  // Converts the string to an int
        printf("Converted number is %d\n", int_number);  // Prints out the converted number

    }
    printf("*** End of Converting Strings to int Demo ***\n"); // Prints out the end of the program
/* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");  // Prints out the start of the program
    char double_string[80]; // Declares the double_string array
    double double_number;   // Declares the double_number variable

    while (TRUE) { // While loop to keep the program running

        printf("Type the double numeric string (q - to quit):\n");
        gets(double_string); // Gets the string from the user
        if (strcmp(double_string, "q") == 0) break; // If the user types q, the program will break out of the loop
        double_number = atof(double_string);  // Converts the string to a double
        printf("Converted number is %f\n", double_number);  // Prints out the converted number

    }
    printf("*** End of Converting Strings to double Demo ***\n"); // Prints out the end of the program
/* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");  // Prints out the start of the program
    char long_string[80]; // Declares the long_string array
    long long_number;   // Declares the long_number variable

    while (TRUE) {

        printf("Type the long numeric string (q - to quit):\n");
        gets(long_string); // Gets the string from the user
        if (strcmp(long_string, "q") == 0) break; // If the user types q, the program will break out of the loop
        long_number = atol(long_string);  // Converts the string to a long
        printf("Converted number is %ld\n", long_number);  // Prints out the converted number

    }
    printf("*** End of Converting Strings to long Demo ***\n"); // Prints out the end of the program
    return;
}
