#include <stdio.h>
#include "main.h"

/**
* main - prints program name, followed by a new line
* @argc: number of commandline arguments in argv
* @argv: array of commandline arguments
* Return: always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
