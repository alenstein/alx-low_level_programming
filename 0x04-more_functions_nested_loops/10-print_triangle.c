#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/

void print_triangle(int size)
{
	int rw, col, a;

	if (size <= 0)
		_putchar('\n');
	for (rw = 0; rw < size; rw++)
	{
		for (col = size - rw; col > 1; col--)
			_putchar(' ');
		for (a = rw + col; a >= 1; a--)
			_putchar('#');
		_putchar('\n');
	}
}
