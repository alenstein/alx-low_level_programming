#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	 
	return (_sqrt_recursive((n + (n-1)) / 2);
}
