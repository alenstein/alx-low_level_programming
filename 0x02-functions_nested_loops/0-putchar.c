#include <stdio.h>
#include "main.h"
/**
* main - prints _putchar to console
* Return: always 0
*/
int main(void)
{
	int i = 0;
	char chars[] = "_putchar";
	int size = sizeof(chars) / sizeof(chars[0]);

	while (i < size)
	{
		_putchar(chars[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
