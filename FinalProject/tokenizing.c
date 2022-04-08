#include "tokenizing.h"

void tokenizing() {
/* Version 1 */
    printf("*** Start of Tokenizing words Demo ***\n"); // Prints out the start of the program
    char words[200];                                     // Declares the array of words
    char *word;                                          // Declares the pointer to the array of words.
    int w_counter;                                       // Declares the counter for the number of words.
    while (TRUE) {                                       // While loop to keep the program running.
        printf("Type a few words separated by space(q - to quit):\n");
        gets(words);                                     // Gets the input from the user.
        if (strcmp(words, "q") == 0)
            break;              // If the user types q, the program will break.
        word = strtok(words, " ");                       // Splits the words by space.
        w_counter = 1;
        while (word) {                                   // While loop to print out the words.
            printf("word #%d is \'%s\'\n", w_counter++, word); // Prints out the words.
            word = strtok(NULL, " ");
        }
    }
    printf("*** End of Tokenizing Words Demo ***\n\n"); // Prints out the end of the program.

/* Version 2 */


/* Version 3 */

    return;
}