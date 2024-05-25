# Editor-De-Cod-Avansat

Homework Assignment

## Structura Proiectului

Proiectul este organizat în trei directoare principale:

- **EditorDeCod_VariantaC**: Conține implementarea algoritmului de calcul al distanței Levenshtein în C.
- **EditorDeCod_VariantaPython**: Conține implementarea algoritmului de calcul al distanței Levenshtein în Python + Conține generatorul de date pentru testarea algoritmului, implementat în Python .
- **GeneratorDateC**: Conține generatorul de date pentru testarea algoritmului, implementat în C.

## Pașii pentru a rula codurile

### 1. Generarea fișierelor de test

#### În C:
1. **Navigați la directorul `GeneratorDateC`**:
    ```sh
    cd GeneratorDateC
    ```

2. **Compilarea generatorului de date**:
    - Deschideți un terminal în directorul `GeneratorDateC`.
    - Rulați următoarea comandă pentru a compila fișierele `main.c` și `functions.c` într-un executabil numit `GeneratorDateC`:
      ```sh
      gcc -o GeneratorDateC main.c functions.c
      ```

3. **Rularea generatorului de date**:
    - După compilare, rulați executabilul pentru a genera fișierele de test:
      ```sh
      ./GeneratorDateC
      ```
    - Acest pas va genera 10 perechi de fișiere text cu date aleatorii: `correct_syntax_X.txt` și `code_fragment_X.txt`, unde `X` variază de la 1 la 10.

### 2. Rularea algoritmului de calcul al distanței Levenshtein

#### În C:
1. **Navigați la directorul `EditorDeCod_VariantaC`**:
    ```sh
    cd ../EditorDeCod_VariantaC
    ```

2. **Compilarea programului principal**:
    - Deschideți un terminal în directorul `EditorDeCod_VariantaC`.
    - Rulați următoarea comandă pentru a compila fișierele `main.c` și `functions.c` într-un executabil numit `EditorDeCod`:
      ```sh
      gcc -o EditorDeCod main.c functions.c
      ```

3. **Rularea programului principal**:
    - După compilare, rulați executabilul pentru a calcula distanța Levenshtein pentru fiecare pereche de fișiere generate:
      ```sh
      ./EditorDeCod
      ```
    - Rezultatele vor fi afișate în terminal, inclusiv numărul minim de operații necesare pentru fiecare pereche de fișiere și timpul de execuție al algoritmului.

#### În Python:
1. **Navigați la directorul `EditorDeCod_VariantaPython`**:
    ```sh
    cd ../EditorDeCod_VariantaPython
    ```

2. **Executarea programului principal**:
    - Deschideți un terminal în directorul `EditorDeCod_VariantaPython`.
    - Rulați următoarea comandă pentru a executa programul:
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
