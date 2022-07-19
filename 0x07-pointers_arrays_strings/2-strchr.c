#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	unsigned short int a;

	for (a = 0; s[a] != '\0' ; a++)
	{
		if (s[a] == c)
		return (&s[a]);
	}
	return (0);
}
