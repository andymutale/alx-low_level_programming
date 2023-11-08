#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command line arguments
 * @argv: the array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    	int i, bytes;
    	char *ptr;

    	if (argc != 2)
    	{
		printf("Error\n");
		exit(1);
    	}

    	bytes = atoi(argv[1]);

    	if (bytes < 0)
    	{
		printf("Error\n");
		exit(2);
    	}

    	ptr = (char *)main;

    	for (i = 0; i < bytes; i++)
    	{
		printf("%02hhx", ptr[i]);
		if (i < bytes - 1)
	    		printf(" ");
		else
	    		printf("\n");
    	}

    	return (0);
}

