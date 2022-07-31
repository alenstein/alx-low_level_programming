#include <stdlib.h>
#include "main.h"

/**
 * *array_range -  function that creates an array of integers.
 * @min: minimum value stored
 * @max: maximum value stored
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
