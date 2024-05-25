from functions import read_file, levenshtein_distance


def main() :
    # Citim continutul fisierelor
    correct_syntax = read_file("correct_syntax_10.txt")
    code_fragment = read_file("code_fragment_10.txt")

    # Calculam distanaa Levenshtein intre continuturile citite
    distance = levenshtein_distance(code_fragment, correct_syntax)
    print(f"Numărul minim de operații necesare: {distance}")


if __name__ == "__main__" :
    main()
