#include <stdio.h>
#include <main.h>

/**
 * _strncat - a function that concatenates two strings.
 * using at most n bytes from src and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: input string
 * @src: input string
 * @n: input value
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
