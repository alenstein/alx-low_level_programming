#include <stdio.h>
#include "main.h"

/**
* print_rev - function to print string in reverse.
* @s: value taken from main
* Return: (0)
*/

void rev_string(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{

		_putchar(s[len]);
	}
	_putchar('\n');
}
