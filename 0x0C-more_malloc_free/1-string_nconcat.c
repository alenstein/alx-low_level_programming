#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: string to be appended
 * @s2: string to concatenate from
 * @n: number of bytes to  concatenate from s2 to s1
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0;

	for (len1 = 0; s1 && s1[len1]; len1++)
		;

	for (len2 = 0; s2 && s2[len2]; len2++)
		;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		s[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
