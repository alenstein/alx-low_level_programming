#include <stdio.h>
#include "main.h"

/**
 * main - All arguments should be printed, including the first one
 * Only prints one argument per line, ending with a new line
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: always 0
 */

int main(unsigned int argc, char *argv[])
{
	unsigned int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
