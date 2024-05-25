import random
import string
import os

def generate_random_string(length):
    charset = string.ascii_letters  # Litere mici și mari din alfabetul englez
    return ''.join(random.choice(charset) for _ in range(length))

def introduce_errors(correct_string):
    length = len(correct_string)
    error_string = list(correct_string)
    num_errors = random.randint(1, length // 2)  # Număr de erori între 1 și length/2

    for _ in range(num_errors):
        pos = random.randint(0, length - 1)
        error_string[pos] = random.choice(string.ascii_letters)

    return ''.join(error_string)

def generate_test_files(num_files):
    for i in range(num_files):
        correct_filename = f"correct_syntax_{i + 1}.txt"
        error_filename = f"code_fragment_{i + 1}.txt"
        length = random.randint(1, 100)  # Lungime random între 1 și 100

        correct_string = generate_random_string(length)
        error_string = introduce_errors(correct_string)

        with open(correct_filename, 'w') as correct_file:
            correct_file.write(correct_string)

        with open(error_filename, 'w') as error_file:
            error_file.write(error_string)

    print(f"{num_files} perechi de fișiere de test au fost generate.")

if __name__ == "__main__":
    generate_test_files(10)
