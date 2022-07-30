#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat -  function that concatenates two strings.
 * @s1: string to be concatenated
 * @s2: the other string to be concatenated
 * Return: pointer to new string (Success), NULL (Failure)
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (a < len1)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (len1 + len2))
		{
			s3[a] = s2[a];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
