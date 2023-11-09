#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0.
*/
void print_opcodes(void) {
    printf("55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Incorrect number of arguments\n");
        return (1);
    }

    int number_of_bytes = atoi(argv[0]);
    if (number_of_bytes < 0) {
        printf("Error: Number of bytes cannot be negative\n");
        return (2);
    }

    print_opcodes();

    return (0);
}

