#include <stdio.h>
/**
* main - prints _putchar to console
* Return: always 0
*/
int main(void)
{
	int i = 0;
	int size = sizeof(chars) / sizeof(chars[0]);
	char chars[] = "_putchar";

	while (i < size)
	{
		_putchar(chars[i]);
	}
	return (0);
}
