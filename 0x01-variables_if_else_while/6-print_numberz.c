#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit);

	putchar('\n');

	return (0);
}
