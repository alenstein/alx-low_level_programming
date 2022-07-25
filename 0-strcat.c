#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input string for source
 * Return: returns a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
