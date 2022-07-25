#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring function
 *  that gets the length of a prefix substring.
 *  @s: input string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned short int a;
	unsigned short int b;
	unsigned int length;

	length = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0' && accept[b] != s[a]; b++)
			;
		if (s[a] == accept[b])
			length++;
		if (accept[b] == '\0')
			return (length);
	}
	return (length);
}
