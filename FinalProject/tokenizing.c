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
    printf("*** Start of Tokenizing phrases Demo ***\n"); // Prints out the start of the program
    char phrases[200];                                     // Declares the array of phrases
    char *phrase;                                          // Declares the pointer to the array of phrases.
    int p_counter;                                       // Declares the counter for the number of phrases.
    while (TRUE) {                                       // While loop to keep the program running.
        printf("Type a few phrases separated by comma(q - to quit):\n");
        gets(phrases);                                     // Gets the input from the user.
        if (strcmp(phrases, "q") == 0)
            break;              // If the user types q, the program will break.
        phrase = strtok(phrases, ",");                       // Splits the phrases by space.
        p_counter = 1;      // Initializes the counter to 1.
        while (phrase) {                                   // While loop to print out the phrases.
            printf("phrase #%d is \'%s\'\n", p_counter++, phrase); // Prints out the phrases.
            phrase = strtok(NULL, ",");
        }
    }
    printf("*** End of Tokenizing phrases Demo ***\n\n"); // Prints out the end of the program.

/* Version 3 */
    printf("*** Start of Tokenizing sentences Demo ***\n"); // Prints out the start of the program
    char sentences[200];                                     // Declares the array of sentences
    char *sentence;                                          // Declares the pointer to the array of sentences.
    int s_counter;                                       // Declares the counter for the number of sentences.
    while (TRUE) {                                       // While loop to keep the program running.
        printf("Type a few sentences separated by dot(q - to quit):\n");
        gets(sentences);                                     // Gets the input from the user.
        if (strcmp(sentences, "q") == 0)
            break;              // If the user types q, the program will break.
        sentence = strtok(sentences, ".");                       // Splits the sentences by space.
        s_counter = 1;
        while (sentence) {                                   // While loop to print out the sentences.
            printf("sentence #%d is \'%s\'\n", s_counter++, sentence); // Prints out the sentences.
            sentence = strtok(NULL, ".");
        }

        printf("*** End of Tokenizing Sentences Demo ***\n\n"); // Prints out the end of the program.
    }

    return;
}