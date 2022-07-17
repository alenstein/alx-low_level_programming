#include <stdio.h>
#include "main.h"

/**
* puts2 - function to print all characters of a string
* @str -  parameter for printing a char
* Returns nothing
*/

void puts2(char *str)
{
	unsigned short int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
