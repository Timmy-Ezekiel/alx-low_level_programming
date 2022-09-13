#include "main.h"

/**
	* jack_bauer- prints time starting from 00:00 - 23:59
	*
	* @void: no parameter
	*
	* Return: void (No return value)
	*
	**/

void jack_bauer(void)
{
	int a, b, c, d, e;

	e = 10;
	for (a = 0; a < 3; a++)
	{
		if (a == 2)
		{
			e = 4;
		}
		for (b = 0; b < e; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
return;
}
