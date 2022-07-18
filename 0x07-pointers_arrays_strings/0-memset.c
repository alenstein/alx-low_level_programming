#include <stdio.h>
#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: starting address of memory to be filled
 *@b:  the constant byte
 *@n: bytes of the memory area pointed to by s
 *
 *Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned short int a = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
