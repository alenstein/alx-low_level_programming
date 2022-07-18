#include <stdio.h>
#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @letters: pointer to a letter in lowercase
 *
 * Return: letter in uppercase
 */

char *string_toupper(char *letters)
{
	int a;

	a = 0;
	while (letters[a] != '\0')
	{
		if (letters[a] >= 'a' && letters[a] <= 'z')
			letters[a] = letters[a] - 0x20;
		a++;
	}
	return (letters);
}
