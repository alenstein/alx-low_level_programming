#include <stdio.h>
#include "main.h"

/**
* puts2 - function prints every other character of a string,
* starting with the first character, followed by a new line.
*@str: - parameter for taking an array of characters
* Returns nothing
*/

void puts2(char *str)
{
	unsigned short int i = 0;
	int l = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		i++;
	}
	l = i - 1;
	for (b = 0 ; b <= l ; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
