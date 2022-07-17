#include <stdio.h>
#include "main.h"

/**
* rev_string - function to print string in reverse.
* @s: value taken from main
* Return: (0)
*/
void rev_string(char *s)
{
	int len = 0;
	int a = 0;
	char *b = s;
	int c = 0;
	int x;
	char n;

	while (*b != '\0')
	{
		b++;
		len++;
	}
	a = len - 1;
	for ( ; c < ((a / 2) + 1) ; c++)
	{
		x = (a - c);
		n = s[c];
		s[c] = s[x];
		s[x] = n;
	}
}
