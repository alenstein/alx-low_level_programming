#include "main.h"

/**
* _find_sqrt - returns the natural square root of a number
* @n: number to calculate the square root of
* @i: iterator variable
* Return: the resulting square root
*/

int _find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
