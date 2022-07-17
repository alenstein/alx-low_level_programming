#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function for copying a string
 * @dest: destination string
 * @src: source string
 * @n: input for number of bytes
 *
 * Return:  a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
