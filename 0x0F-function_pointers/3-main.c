#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Perform simple arithmetic operations
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 if successful, 98 for wrong number
 *  of arguments, 99 for invalid operator,
 *         100 for division/modulo by zero
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(num1, num2));
	return (0);
}

