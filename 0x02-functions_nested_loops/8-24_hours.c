#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: no return
*/
void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 48; w <= 50; w++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 53; y++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (w >= 50 && x >= 52)
					break;
					_putchar(w);
					_putchar(x);
					_putchar(58);
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
