#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - unction that allocates memory using malloc
 * @b: number of bytes to be allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
