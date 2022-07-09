#include <stdio.h>
#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @num: takes in an integer
*/
void print_diagonal(int num)
{
	int i, j;

	if (num <= 0)
		_putchar('\n');
	for (i = 0; i < num; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
