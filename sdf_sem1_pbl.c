#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 10
#define MAX_TRIES 5
void yellow ()
{
printf("\033[0;33m");
}
void blue ()
{
printf("\033[0;34m");
}void purple ()
{
printf("\033[0;35m");
}
void cyan ()
{
printf("\033[0;36m");
}
void white ()
{
printf("\033[0;37m");
}
void red ()
{
printf("\033[0;31m");
}
void green ()
{
printf("\033[0;32m");
}
void reset ()
{
printf("\033[0m");
}

int main() {

yellow();
sleep(3);
printf("\n \t \t \t \t \t \t \t  WELCOME TO THE GAME OF GUESSING !! \n \n");
sleep(1);
white();
printf("HOW TO PLAY:\n\n");
sleep(1);
cyan();
printf("1. YOU WILL HAVE TO GUESS A WORD FROM THE GIVEN HINT, WHICH WILL INCLUDE THE NUMBER OF ALPHABETS AS WELL AS THE CATEGORY IN WHICH THE WORD LIES.\n\n");
sleep(1);
sleep(3);
printf("2. CATEGORIES WILL BE LIKE-");
sleep(1);
white();
printf(" ANIMALS,CITIES,COLORS,LANGUAGES ETC. \n\n");
sleep(3);
cyan();
printf("3. YOU WILL HAVE 5 CHANCES TO GUESS THE WORD AFTER WHICH THE GAME WILL END.\n\n");
sleep(3);
printf("4. AS THE LEVELS WILL INCREASE,THE DIFFICULTY WILL INCREASE GRADUALLY.\n\n");
sleep(3);
printf("5. AFTER EACH LEVEL WORD'S LENGTH WILL INCREASE AND ALSO HOW TOUGH THE WORD IS TO SPELL WILL CHANGE.\n\n");
sleep(3);
printf("\033[2J");
printf("\033[1;1H");
yellow();
printf("\n \t \t \t \t \t \t \t \t \t LETS PLAY....");
sleep(3);


    char words[MAX_WORDS][20] = {
        "APPLE", "BANANA", "CHERRY", "DATE", "FIG",
        "GRAPE", "KIWI", "LEMON", "MANGO", "ORANGE"
    };

    char secretWord[20];
    char guessedWord[20];
    int remainingTries = MAX_TRIES;
    char guessedInput[20];

    // Seed the random number generator and select a random word
    srand(time(0));
    int index = rand() % MAX_WORDS;
    strcpy(secretWord, words[index]);

    // Initialize guessedWord with underscores
    int wordLength = strlen(secretWord);
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    // Clear screen for a clean interface
    printf("\033[2J");
    printf("\033[1;1H");
    red();
    printf("\t \t \t \t \t \t \t \t \t \tLEVEL 1\n\n\n\n");
    sleep(2);
    yellow();
    printf("\t\t\t\t\t\t\t\t      THE LEVEL OF NAMES OF FRUITS");
    sleep(2);
    printf("\033[2J");
    printf("\033[1;1H");

    // Game loop
    while (remainingTries > 0) {
        yellow();
        printf("WORD IS OF LENGTH: %s\n\n", guessedWord);
        red();
        printf("REMAINING TRIES: %d\n\n", remainingTries);
        green();
        printf("ENTER A LETTER OR GUESS THE WORD: ");
        scanf("%s", guessedInput);
        reset();
        printf("\n");

        // Clear screen for each round
        printf("\033[2J");
        printf("\033[1;1H");

        // Check if the guessed input matches the entire word
        if (strcmp(guessedInput, secretWord) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord);
            reset();
            getchar();
            goto level2;

        }

        // Check if the guessed input is a single letter
        char guessedLetter = guessedInput[0];
        int matchFound = 0;

        for (int i = 0; i < wordLength; i++) {
            if (secretWord[i] == guessedLetter && guessedWord[i] == '_') {
                guessedWord[i] = guessedLetter;
                matchFound = 1;
            }
        }

        // If no match was found, decrement remaining tries
        if (!matchFound) {
            remainingTries--;
        }

        // Check if the entire word has been guessed
        if (strcmp(guessedWord, secretWord) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord);
            reset();
            getchar();
            goto level2;


        }
    }

    // Game over: user ran out of tries
    red();
    printf("OUT OF TRIES! THE WORD WAS: %s\n", secretWord);
    reset();
level2:
cyan();
sleep(2);
printf("\033[2J");
printf("\033[1;1H");
printf("LETS GO TO LEVEL 2\n\n");
sleep(3);
    printf("\033[2J");
    printf("\033[1;1H");
    red();
    printf("\t \t \t \t \t \t \t \t \t \tLEVEL 2\n\n\n\n");
    sleep(2);
    yellow();
    printf("\t\t\t\t\t\t\t\t      THE LEVEL OF NAMES OF COUNTRIES");
    sleep(2);
    printf("\033[2J");
    printf("\033[1;1H");
 char words1[MAX_WORDS][20] = {
        "INDIA", "AUSTRALIA", "ENGLAND", "SOUTHAFRICA", "BRAZIL",
        "AGRENTINA", "NEWZEALAND", "ITALY", "FRANCE", "IRAN"
    };

    char secretWord1[20];
    char guessedWord1[20];
    int remainingTries1 = MAX_TRIES;
    char guessedInput1[20];

    // Seed the random number generator and select a random word
    srand(time(0));
    int index1 = rand() % MAX_WORDS;
    strcpy(secretWord1, words1[index]);

    // Initialize guessedWord with underscores
    int wordLength1 = strlen(secretWord1);
    for (int i = 0; i < wordLength1; i++) {
        guessedWord1[i] = '_';
    }
    guessedWord1[wordLength1] = '\0';

    // Clear screen for a clean interface
    printf("\033[2J");
    printf("\033[1;1H");

    // Game loop
    while (remainingTries1 > 0) {
        yellow();
        printf("WORD IS OF LENGTH: %s\n\n", guessedWord1);
        red();
        printf("REMAINING TRIES: %d\n\n", remainingTries1);
        green();
        printf("ENTER A LETTER OR GUESS THE WORD: ");
        scanf("%s", guessedInput1);
        reset();
        printf("\n");

        // Clear screen for each round
        printf("\033[2J");
        printf("\033[1;1H");

        // Check if the guessed input matches the entire word
        if (strcmp(guessedInput1, secretWord1) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord1);
            reset();
            getchar();
            goto level3;

        }

        // Check if the guessed input is a single letter
        char guessedLetter1 = guessedInput1[0];
        int matchFound1 = 0;

        for (int i = 0; i < wordLength1; i++) {
            if (secretWord1[i] == guessedLetter1 && guessedWord1[i] == '_') {
                guessedWord1[i] = guessedLetter1;
                matchFound1 = 1;
            }
        }

        // If no match was found, decrement remaining tries
        if (!matchFound1) {
            remainingTries1--;
        }

        // Check if the entire word has been guessed
        if (strcmp(guessedWord1, secretWord1) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord1);
            reset();
            getchar();
            goto level3;


        }
    }

    // Game over: user ran out of tries
    red();
    printf("OUT OF TRIES! THE WORD WAS: %s\n", secretWord1);
    reset();
level3:
cyan();
sleep(2);
printf("\033[2J");
printf("\033[1;1H");

printf("LETS GO TO LEVEL 3\n\n");
sleep(3);
    printf("\033[2J");
    printf("\033[1;1H");
    red();
    printf("\t \t \t \t \t \t \t \t \t \tLEVEL 3\n\n\n\n");
    sleep(2);
    yellow();
    printf("\t\t\t\t\t\t\t\t       THE LEVEL OF COLOURS");
    sleep(2);
    printf("\033[2J");
    printf("\033[1;1H");
 char words2[MAX_WORDS][20] = {
        "RED", "BLUE", "LAVENDER", "VIOLET", "GREEN",
        "WHITE", "GREY", "PINK", "PURPLE", "BROWN"
    };

    char secretWord2[20];
    char guessedWord2[20];
    int remainingTries2 = MAX_TRIES;
    char guessedInput2[20];

    // Seed the random number generator and select a random word
    srand(time(0));
    int index2 = rand() % MAX_WORDS;
    strcpy(secretWord2, words2[index]);

    // Initialize guessedWord with underscores
    int wordLength2 = strlen(secretWord2);
    for (int i = 0; i < wordLength2; i++) {
        guessedWord2[i] = '_';
    }
    guessedWord1[wordLength2] = '\0';

    // Clear screen for a clean interface
    printf("\033[2J");
    printf("\033[1;1H");

    // Game loop
    while (remainingTries2 > 0) {
        yellow();
        printf("WORD IS OF LENGTH: %s\n\n", guessedWord2);
        red();
        printf("REMAINING TRIES: %d\n\n", remainingTries2);
        green();
        printf("ENTER A LETTER OR GUESS THE WORD: ");
        scanf("%s", guessedInput2);
        reset();
        printf("\n");

        // Clear screen for each round
        printf("\033[2J");
        printf("\033[1;1H");

        // Check if the guessed input matches the entire word
        if (strcmp(guessedInput2, secretWord2) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord2);
            reset();
            getchar();
            goto level4;

        }

        // Check if the guessed input is a single letter
        char guessedLetter2 = guessedInput2[0];
        int matchFound2 = 0;

        for (int i = 0; i < wordLength2; i++) {
            if (secretWord2[i] == guessedLetter2 && guessedWord2[i] == '_') {
                guessedWord2[i] = guessedLetter2;
                matchFound2 = 1;
            }
        }

        // If no match was found, decrement remaining tries
        if (!matchFound2) {
            remainingTries2--;
        }

        // Check if the entire word has been guessed
        if (strcmp(guessedWord2, secretWord2) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord2);
            reset();
            getchar();
            goto level4;


        }
    }

    // Game over: user ran out of tries
    red();
    printf("OUT OF TRIES! THE WORD WAS: %s\n", secretWord2);
    reset();
level4:
cyan();
sleep(2);
printf("\033[2J");
printf("\033[1;1H");

printf("LETS GO TO LEVEL 4\n\n");
sleep(3);
    printf("\033[2J");
    printf("\033[1;1H");
    red();
    printf("\t \t \t \t \t \t \t \t \t \tLEVEL 4\n\n\n\n");
    sleep(2);
    yellow();
    printf("\t\t\t\t\t\t\t\t      THE LEVEL OF DIFFERENT LANGUAGES");
    sleep(2);
    printf("\033[2J");
    printf("\033[1;1H");
 char words3[MAX_WORDS][20] = {
        "ENGLISH", "SPAINISH", "HINDI", "URDU", "FRENCH",
        "GERMAN", "ARABIC", "CHINESE", "RUSSIAN", "ITALIAN"
    };

    char secretWord3[20];
    char guessedWord3[20];
    int remainingTries3 = MAX_TRIES;
    char guessedInput3[20];

    // Seed the random number generator and select a random word
    srand(time(0));
    int index3 = rand() % MAX_WORDS;
    strcpy(secretWord3, words3[index]);

    // Initialize guessedWord with underscores
    int wordLength3 = strlen(secretWord3);
    for (int i = 0; i < wordLength3; i++) {
        guessedWord3[i] = '_';
    }
    guessedWord1[wordLength3] = '\0';

    // Clear screen for a clean interface
    printf("\033[2J");
    printf("\033[1;1H");

    // Game loop
    while (remainingTries3 > 0) {
        yellow();
        printf("WORD IS OF LENGTH: %s\n\n", guessedWord3);
        red();
        printf("REMAINING TRIES: %d\n\n", remainingTries3);
        green();
        printf("ENTER A LETTER OR GUESS THE WORD: ");
        scanf("%s", guessedInput3);
        reset();
        printf("\n");

        // Clear screen for each round
        printf("\033[2J");
        printf("\033[1;1H");

        // Check if the guessed input matches the entire word
        if (strcmp(guessedInput1, secretWord3) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord3);
            reset();
            getchar();
            goto level5;

        }

        // Check if the guessed input is a single letter
        char guessedLetter3= guessedInput3[0];
        int matchFound3 = 0;

        for (int i = 0; i < wordLength3; i++) {
            if (secretWord3[i] == guessedLetter3 && guessedWord3[i] == '_') {
                guessedWord3[i] = guessedLetter3;
                matchFound3 = 1;
            }
        }

        // If no match was found, decrement remaining tries
        if (!matchFound3) {
            remainingTries3--;
        }

        // Check if the entire word has been guessed
        if (strcmp(guessedWord3, secretWord3) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord3);
            reset();
            getchar();
            goto level5;


        }
    }

    // Game over: user ran out of tries
    red();
    printf("OUT OF TRIES! THE WORD WAS: %s\n", secretWord3);
    reset();
level5:
cyan();
sleep(2);
printf("\033[2J");
printf("\033[1;1H");
printf("LETS GO TO LEVEL 5\n\n");
sleep(3);
    printf("\033[2J");
    printf("\033[1;1H");
    red();
    printf("\t \t \t \t \t \t \t \t \t \tLEVEL 5\n\n\n\n");
    sleep(2);
    yellow();
    printf("\t\t\t\t\t\t\t\t      THE LEVEL OF DIFFERENT SPORTS");
    sleep(2);
    printf("\033[2J");
    printf("\033[1;1H");
 char words4[MAX_WORDS][20] = {
        "FOOTBALL", "CRICKET", "GOLF", "BADMINTON", "TENNIS",
        "HOCKEY", "BOXING", "SWIMMING", "SCOCCER", "BASEBALL"
    };

    char secretWord4[20];
    char guessedWord4[20];
    int remainingTries4 = MAX_TRIES;
    char guessedInput4[20];

    // Seed the random number generator and select a random word
    srand(time(0));
    int index4 = rand() % MAX_WORDS;
    strcpy(secretWord4, words4[index]);

    // Initialize guessedWord with underscores
    int wordLength4 = strlen(secretWord4);
    for (int i = 0; i < wordLength4; i++) {
        guessedWord4[i] = '_';
    }
    guessedWord1[wordLength4] = '\0';

    // Clear screen for a clean interface
    printf("\033[2J");
    printf("\033[1;1H");

    // Game loop
    while (remainingTries4 > 0) {
        yellow();
        printf("WORD IS OF LENGTH: %s\n\n", guessedWord4);
        red();
        printf("REMAINING TRIES: %d\n\n", remainingTries4);
        green();
        printf("ENTER A LETTER OR GUESS THE WORD: ");
        scanf("%s", guessedInput4);
        reset();
        printf("\n");

        // Clear screen for each round
        printf("\033[2J");
        printf("\033[1;1H");

        // Check if the guessed input matches the entire word
        if (strcmp(guessedInput4, secretWord4) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord4);
            reset();
            getchar();
            goto level0;

        }

        // Check if the guessed input is a single letter
        char guessedLetter4 = guessedInput4[0];
        int matchFound4 = 0;

        for (int i = 0; i < wordLength4; i++) {
            if (secretWord4[i] == guessedLetter4 && guessedWord4[i] == '_') {
                guessedWord4[i] = guessedLetter4;
                matchFound4 = 1;
            }
        }

        // If no match was found, decrement remaining tries
        if (!matchFound4) {
            remainingTries4--;
        }

        // Check if the entire word has been guessed
        if (strcmp(guessedWord4, secretWord4) == 0) {
            green();
            printf("CONGRATULATIONS! YOU'VE GUESSED THE WORD: %s\n\n", secretWord4);
            reset();
            getchar();
            goto level0;


        }
    }

    // Game over: user ran out of tries
    red();
    printf("OUT OF TRIES! THE WORD WAS: %s\n", secretWord4);
    reset();
level0:
cyan();
sleep(2);
printf("\033[2J");
printf("\033[1;1H");
white();
printf("THANKS FOR PLAYING\n\n");
getchar();
return 0;
}


