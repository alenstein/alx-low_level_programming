#include <stdio.h>
#include "stdlib.h"
/**
*main - prints the min number of coins to make change for an amount of money
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int amnt = atoi(argv[1]), coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (amnt > 25)
	{
		while (amnt >= 25)
			amnt -= 25, coins++;
	}
	if (amnt > 10 && amnt < 25)
	{
		while (amnt >= 10)
			amnt -= 10, coins++;
	}
	if (amnt > 5 && amnt < 10)
	{
		while (amnt >= 5)
			amnt -= 5, coins++;
	}
	if (amnt > 2 && amnt < 5)
	{
		while (amnt >= 2)
			amnt -= 2, coins++;
	}
	if (amnt == 1 || amnt == 2 || amnt == 5 || amnt == 10 || amnt == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
