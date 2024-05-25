# Editor-De-Cod-Avansat

Homework Assignment

## Structura Proiectului

Proiectul este organizat în trei directoare principale:

- **EditorDeCod_VariantaC**: Conține implementarea algoritmului de calcul al distanței Levenshtein în C.
- **EditorDeCod_VariantaPython**: Conține implementarea algoritmului de calcul al distanței Levenshtein în Python.
- **GeneratorDateC**: Conține generatorul de date pentru testarea algoritmului, implementat în C.

## Pașii pentru a rula codurile

### 1. Generarea fișierelor de test

#### În C:
1. **Compilarea și rularea generatorului de date:**
    - Navigați la directorul `GeneratorDateC`.
    - Compilare: Deschideți un terminal și rulați comanda:
      ```sh
      gcc -o GeneratorDateC main.c functions.c
      ```
    - Rulare: Rulați programul pentru a genera fișierele de test:
      ```sh
      ./GeneratorDateC
      ```
    - Acest pas va genera 10 perechi de fișiere text cu date aleatorii: `correct_syntax_X.txt` și `code_fragment_X.txt`, unde `X` variază de la 1 la 10.

### 2. Rularea algoritmului de calcul al distanței Levenshtein

#### În C:
1. **Compilarea și rularea programului principal:**
    - Navigați la directorul `EditorDeCod_VariantaC`.
    - Compilare: Deschideți un terminal și rulați comanda:
      ```sh
      gcc -o EditorDeCod main.c functions.c
      ```
    - Rulare: Rulați programul pentru a calcula distanța Levenshtein pentru fiecare pereche de fișiere generate:
      ```sh
      ./EditorDeCod
      ```
    - Rezultatele vor fi afișate în terminal, inclusiv numărul minim de operații necesare pentru fiecare pereche de fișiere și timpul de execuție al algoritmului.

#### În Python:
1. **Executarea programului principal:**
    - Navigați la directorul `EditorDeCod_VariantaPython`.
    - Rulare: Deschideți un terminal și rulați comanda:
      ```sh
      python main.py
      ```
    - Rezultatele vor fi afișate în terminal, inclusiv numărul minim de operații necesare pentru fiecare pereche de fișiere generate aleatoriu.

## Structura Directorului

### Directorul principal (GeneratorDateC):
- **main.c**: Conține funcția principală pentru generarea datelor de test.
- **functions.c**: Conține funcțiile pentru generarea șirurilor de caractere și introducerea erorilor.
- **functions.h**: Conține declarațiile funcțiilor din `functions.c`.
- **correct_syntax_X.txt** și **code_fragment_X.txt**: Fișierele de test generate.

### Directorul principal (EditorDeCod_VariantaC):
- **main.c**: Conține funcția principală pentru calculul distanței Levenshtein.
- **functions.c**: Conține funcțiile pentru calculul distanței Levenshtein și citirea fișierelor.
- **functions.h**: Conține declarațiile funcțiilor din `functions.c`.
- **correct_syntax_X.txt** și **code_fragment_X.txt**: Fișierele de test generate.

### Directorul principal pentru Python (EditorDeCod_VariantaPython):
- **main.py**: Conține funcția principală pentru calculul distanței Levenshtein.
- **functions.py**: Conține funcțiile pentru calculul distanței Levenshtein și citirea fișierelor.
- **generator.py**: Conține funcțiile pentru generarea șirurilor de caractere și introducerea erorilor.
- **correct_syntax_X.txt** și **code_fragment_X.txt**: Fișierele de test generate.
