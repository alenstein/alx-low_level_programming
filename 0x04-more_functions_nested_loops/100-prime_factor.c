#include <stdio.h>
#include "main.h"

/**
* main - program entry block
* @void: no argument
* Return: 0
*/

int main(void)
{
	long a, num = 612852475143;

	for (a  = 2; a <= num; a++)
	{
		if (num % a == 0)
		{
			num = num / a;
			a--;
		}
	}
	printf("%lu\n", a);
	return (0);
}
