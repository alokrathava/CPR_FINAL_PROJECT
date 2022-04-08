#include "fundamentals.h"

void fundamentals() {
/* Version 1 */
/* Version 1 */
    printf("*** Start of Indexing String Demo ***\n");
    char buffer1[80];
    char num_input[10];
    int position;
    while (TRUE) {
        printf("Type a string (q - to quit): \n");
        gets(buffer1); // This function gets string from user input until it reach a newline
        if (strcmp(buffer1, "q") == 0)
            break; //strcmp compares if buffer1 is equal "q" | if it's equal "q", it will quit
        while (TRUE) {
            printf("Type the character position within the string:\n");
            gets(num_input); // This function gets string from user until if reach a newline
            position = atoi(
                    num_input); // atoi function is convert the string value to int value and store in variable 'position'
            if (position >= strlen(buffer1)) { //strlen fuction - calculate the lenght of the string
                // Check if 'position' is more or equal to lenght of 'buffer1'
                printf("Wrong position... type again, please\n");
                continue; //continue will ignore the next step
            }
            printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
            break;
        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n");

/* Version 2 */


/* Version 3 */

    return;
}