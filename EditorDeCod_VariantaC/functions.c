#include <stdio.h>    // Pentru operatii de intrare/iesire
#include <string.h>   // Pentru manipularea sirurilor de caractere
#include <stdlib.h>   // Pentru operatii de alocare a memoriei si functii de terminare

// Returneaza minimul a trei numere intregi
int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }
    if (b < a && b < c) {
            return b;
    }
    return c;
}

/**
* Functie pentru a calcula distanta Levenshtein.
* Algoritmul este folosit pentru a determina numarul minim de operatii necesare pentru a transforma un sir
* de caracatere in alt sir.
*
**/
int levenshteinDistance(const char *s1, const char *s2) {
    int len1 = strlen(s1); // Lungimea primului sir
    int len2 = strlen(s2); // Lungimea celui de-al doilea sir

    // Alocare matrice pentru a tine distanta
    int **d = (int **)malloc((len1 + 1) * sizeof(int *));
    for (int i = 0; i <= len1; i++) {
        d[i] = (int *)malloc((len2 + 1) * sizeof(int));
    }

    /**
    *  Parcurgem fiecare celula a matricei si o initializam conform algoritmului Levenshtein.
    *  Daca una dintre pozitii este zero, atunci distanta este lungimea celeilalte secvente (operatii de inserare/stergere).
    **/
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0) {
                d[i][j] = j; // Daca primul sir este gol, costul este lungimea celui de-al doilea sir
            } else if (j == 0) {
                d[i][j] = i; // Daca al doilea sir este gol, costul este lungimea primului sir
            } else {
                // Calculam costul minim dintre stergere, inserare si substitutie
                d[i][j] = min(d[i - 1][j] + 1,             // Stergere
                              d[i][j - 1] + 1,             // Inserare
                              d[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])); // Substitutie
            }
        }
    }

    int distance = d[len1][len2]; // Distanta Levenshtein

    // Eliberam memoria
    for (int i = 0; i <= len1; i++) {
        free(d[i]);
    }
    free(d);

    return distance;
}

// Functie pentru a citi continutul unui fisier intr-un sir de caractere
char* readFile(const char *filename) {
    FILE *file = fopen(filename, "r"); // Deschidem fisierul pentru citire
    if (!file) {
        fprintf(stderr, "Nu s-a putut deschide fisierul %s\n", filename);
        exit(1);
    }

    fseek(file, 0, SEEK_END); // Mutam cursorul la sfarsitul fisierului
    long length = ftell(file); // Determinam lungimea fisierului
    fseek(file, 0, SEEK_SET); // Mutam cursorul inapoi la inceputul fisierului

    char *content = (char *)malloc(length + 1); // Alocam memorie pentru continut
    if (!content) {
        fprintf(stderr, "Eroare la alocarea memoriei\n");
        exit(1);
    }

    fread(content, 1, length, file); // Citim continutul fisierului
    content[length] = '\0'; // Adaugam terminatorul de sir

    fclose(file); // Inchidem fisierul
    return content;
}
