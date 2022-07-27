#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string, to stdout
* @str: value to be evaluate.
* Return: not.
*/
void _puts(char *str)
{
	unsigned int l;
	
	l = 0;
	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
