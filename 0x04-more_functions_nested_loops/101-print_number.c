#include <stdio.h>
#include "main.h"

/**
* print_number - prints # using _putchar function
* @num: the integer to print
*
* Return: void
*/

void print_number(int num)
{
	int temp, count, size = 1, ones = num % 10;

	num /= 10;
	temp = num;
	if (ones < 0)
	{
		ones *= -1, temp *= -1, num *= -1;
		_putchar('-');
	}
	if (temp > 0)
	{
		while (temp / 10 != 0)
		{
			temp /= 10, size *= 10;
		}
		while (size > 0)
		{
			count = num / size;
			_putchar('0' + count);
			num -= count * size;
			size /= 10;
		}
	}
	_putchar('0' + ones);
}
