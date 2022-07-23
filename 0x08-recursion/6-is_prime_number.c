#include "main.h"

/**
 * checkIf_prime - checks if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int checkIf_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (checkIf_prime(n, i - 1));
}

/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkIf_prime(n, n - 1));

}
