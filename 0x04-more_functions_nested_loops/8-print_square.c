#include <stdio.h>
#include "main.h"

/**
* print_square - function to print a square
* @length: takes in the length of the square
*/

void print_square(int length)
{
	int i, j;

	if (length <= 0)
		_putchar('\n');
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
			_putchar('#');
		_putchar('\n');
	}
}
