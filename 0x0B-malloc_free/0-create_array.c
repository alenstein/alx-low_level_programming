#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c with
 *
 * Return: pointer to the array (Success), NULL (Failure)
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		arr[a] = c;
		a++;
	}
	return (arr);
}
