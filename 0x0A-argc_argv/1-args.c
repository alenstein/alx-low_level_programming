#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to the program
 *  @argc: number of commandline  arguments
 * @argv: array of commandline arguments
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
