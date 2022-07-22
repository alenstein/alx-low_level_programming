#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/

int _sqrt_recursion(int n)
{
	int i = 0;
	int next_i = (i + n / i) / 2;

	if (i * i <= n && (i + 1) * (i + 1) > n)
		return (i);
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion(next_i));
}
