#include "main.h"

/**
  * more_numbers - Prints 0-14 10 times
  *
  * Return: (0);
  *
  **/

void more_numbers(void)
{
	int x, y;
	int rem, div;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
			{
				div = (y / 10);
				_putchar(div + '0');
			}
			rem = (y % 10);
			_putchar(rem + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
return;
}
