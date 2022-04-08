#include "manipulating.h"

void manipulating() {
/* Version 1 */
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[80];
    char string2[80];
    while (TURE) {
        printf("Type the 1st string (q - to quit):\n");
        gets(string1);// The function "gets()"scans a string of user input until it cannot find a newline.
        if (strcmp(string1, "q") == 0) break;//The function"strcmp()" compare the "syring1" is equal to "q".
        //If it is equal , The function "strcmp" return 0. Then the system is quit the loop.
        printf("Type the 2nd String:\n");
        gets(string2);
        strcat(string1, string2);//Concatenates string2 to the end of string1
        printf("Concatenated string is \'%s\'\n", string1);
    }
    printf("*** End of Concatenating Stings Demo ***\n\n");


/* Version 2 */



/* Version 3 */

    return;
}