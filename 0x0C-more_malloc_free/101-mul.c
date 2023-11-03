#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a number
 * @s: the string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: the result of the multiplication
 */
void mul(char *num1, char *num2)
{
	long result;

	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = strtol(num1, NULL, 10) * strtol(num2, NULL, 10);

	printf("%lu\n", result);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, error code otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mul(argv[1], argv[2]);

	return (0);
}

