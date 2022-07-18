#include <stdio.h>
#include "main.h"

/**
* reverse_array - function that reverses the content of an array
* of integers.
*@a: array containing integers
*@n: is the number of elements of the array
* Return: returns nothing
*/

void reverse_array(int *a, int n)
{
	int x = 0, temp;

	while (x <= n--)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
	}
}
