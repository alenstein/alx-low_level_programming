#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 * @s: the input string 
 * @accept: bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *       or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned short int a;
	unsigned short int b;

    a = 0;
	while (s[a] != '\0')
	{
        b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (&s[a]);
            b++;
    	}
        a++;
	}
	return (NULL);
}
