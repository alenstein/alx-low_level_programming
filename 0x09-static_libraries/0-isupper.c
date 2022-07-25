#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: variable text
* Return: 0 for lowercase, 1 for uppercase.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
