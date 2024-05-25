#include <stdio.h>    // Pentru operatii de intrare/iesire
#include <string.h>   // Pentru manipularea sirurilor de caractere
#include <stdlib.h>   // Pentru operatii de alocare a memoriei si functii de terminare


// Funcție pentru a genera un șir aleatoriu de caractere
void generateRandomString(char *str, int length) {
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < length; i++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        str[i] = charset[key];
    }
    str[length] = '\0';
}

// Funcție pentru a introduce erori în șirul corect
void introduceErrors(char *correctString, char *errorString, int length) {
    strcpy(errorString, correctString);
    int numErrors = rand() % (length / 2) + 1; // Introducem un număr de erori între 1 și length/2

    for (int i = 0; i < numErrors; i++) {
        int pos = rand() % length;
        char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        errorString[pos] = charset[rand() % (sizeof(charset) - 1)];
    }
}

// Funcție pentru a genera un fișier cu un șir aleatoriu
void generateTestFiles(const char *correctFilename, const char *errorFilename, int length) {
    FILE *correctFile = fopen(correctFilename, "w");
    FILE *errorFile = fopen(errorFilename, "w");
    if (!correctFile || !errorFile) {
        fprintf(stderr, "Nu s-a putut crea unul dintre fișierele %s sau %s\n", correctFilename, errorFilename);
        exit(1);
    }

    char *correctString = (char *)malloc(length + 1);
    char *errorString = (char *)malloc(length + 1);
    if (!correctString || !errorString) {
        fprintf(stderr, "Eroare la alocarea memoriei\n");
        exit(1);
    }

    generateRandomString(correctString, length);
    introduceErrors(correctString, errorString, length);

    fprintf(correctFile, "%s\n", correctString);
    fprintf(errorFile, "%s\n", errorString);

    free(correctString);
    free(errorString);
    fclose(correctFile);
    fclose(errorFile);
}
