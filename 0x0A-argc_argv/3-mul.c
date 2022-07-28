#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two 2 given numbers
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: 0 on success, 1 for Error
 */

int main(int argc, char *argv[])
{
	int a, b, ans;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ans = a * b;

	printf("%d\n", ans);

	return (0);
}
