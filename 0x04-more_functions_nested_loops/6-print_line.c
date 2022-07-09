#include <stdio.h>
#include "main.h"

/**
* print_line - Write a function that draws a straight line in the terminal.
* @num: Integer amount of _
*/

void print_line(int num)
{
	char c;

	for (c = 0; c < num; c++)
		_putchar('_');
	_putchar('\n');
}
