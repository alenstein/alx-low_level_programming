#include <stdio.h>
#include "main.h"

/**
* _putchar - prints a char to the console
* @c: char to be printed
* Return: an int corresponding to a char
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
