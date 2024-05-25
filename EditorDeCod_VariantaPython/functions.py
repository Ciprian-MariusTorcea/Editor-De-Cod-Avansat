def min3(a, b, c) :
    """Returneaza minimul dintre trei numere."""
    return min(a, b, c)


def levenshtein_distance(s1, s2) :
    """
        Functie pentru a calcula distanta Levenshtein.
        Algoritmul este folosit pentru a determina numarul minim de operatii necesare pentru a transforma un sir
        de caracatere in alt sir.
    """
    len1, len2 = len(s1), len(s2)

    # Inițializare matrice pentru a păstra distanțele
    d = [[0] * (len2 + 1) for _ in range(len1 + 1)]

    """
        Parcurgem fiecare celula a matricei si o initializam conform algoritmului Levenshtein.
        Daca una dintre pozitii este zero, atunci distanta este lungimea celeilalte secvente (operatii de inserare/stergere).
    """
    for i in range(len1 + 1) :
        for j in range(len2 + 1) :
            if i == 0 :
                d[i][j] = j  # Cost de inserare
            elif j == 0 :
                d[i][j] = i  # Cost de stergere
            else :
                d[i][j] = min3(
                    d[i - 1][j] + 1,  # Stergere
                    d[i][j - 1] + 1,  # Inserare
                    d[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])  # Substitutie
                )

    return d[len1][len2]


def read_file(filename) :
    """Citeste continutul unui fisier."""
    with open(filename, 'r') as file :
        content = file.read().strip()
    return content
