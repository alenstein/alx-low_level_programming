#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checkNumber - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if the char a number, else 0
 **/

int checkNumber(char *a)
{
	unsigned int x, num, len;

	x = 0;
	num = 0;
	len = strlen(a);

	while (x < len)
	{
		if (a[x] < '0' || a[x] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[x] - '0');
		x++;
	}
	return (num);
}

/**
 * main - adds positive numbers
 * @argc: number of commandline arguement
 * @argv: array of commandline arguement
 * Return: result of addition or 1
 **/

int main(int argc, char *argv[])
{
	int y, n, sum;

	sum = 0;
	for (y = 1; y < argc; y++)
	{
		n = checkNumber(argv[y]);
		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
