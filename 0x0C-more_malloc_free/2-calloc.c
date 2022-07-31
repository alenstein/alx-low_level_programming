#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of size bytes
 * @size: size
 * Return:  pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		*(mem + x) = 0;

	return ((void *)mem);
}
