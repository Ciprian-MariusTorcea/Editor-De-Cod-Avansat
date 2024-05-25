#include <stdio.h>    // Pentru operatii de intrare/iesire
#include <string.h>   // Pentru manipularea sirurilor de caractere
#include <stdlib.h>   // Pentru operatii de alocare a memoriei si functii de terminare
#include <time.h>     // Pentru masurarea timpului de executie
#include "functions.h" // Pentru includerea functiilor

int main() {

    // Citim continutul fisierelor
    char *correctSyntax = readFile("correct_syntax_4.txt");
    char *codeFragment = readFile("code_fragment_4.txt");

    // Masuram timpul de start
    clock_t start = clock();

    // Calculam distanta Levenshtein intre continuturile citite
    int distance = levenshteinDistance(codeFragment, correctSyntax);

    // Masuram timpul de stop
    clock_t end = clock();

    // Calculam timpul de executie
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Numarul minim de operatii necesare: %d\n", distance);
    printf("Timpul de executie al algoritmului: %f secunde\n", time_taken);

    // Eliberam memoria alocata pentru continutul fisierelor
    free(correctSyntax);
    free(codeFragment);

    return 0;

}
