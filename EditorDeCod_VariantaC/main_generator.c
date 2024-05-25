#include <stdio.h>    // Pentru operatii de intrare/iesire
#include <string.h>   // Pentru manipularea sirurilor de caractere
#include <stdlib.h>   // Pentru operatii de alocare a memoriei si functii de terminare
#include <time.h>     // Pentru masurarea timpului de executie
#include "functions.h" // Pentru includerea functiilor



int main() {
    srand(time(NULL));

    // Generăm 10 perechi de fișiere de test cu șiruri aleatorii de lungimi random
    for (int i = 0; i < 10; i++) {
        char correctFilename[25];
        char errorFilename[25];
        sprintf(correctFilename, "correct_syntax_%d.txt", i + 1);
        sprintf(errorFilename, "code_fragment_%d.txt", i + 1);
        int length = rand() % 100 + 1; // Lungime random între 1 și 100
        generateTestFiles(correctFilename, errorFilename, length);
    }

    printf("Perechile de fișiere de test au fost generate.\n");

    return 0;
}
