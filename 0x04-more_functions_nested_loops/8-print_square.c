#include "main.h"

/**
  * print_square- Print a sqaure shape using #
  *
  * @size: Dimension of the square
  *
  * Return: void
  *
 **/

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		x = 1;
		while (x <= size)
		{
			y = 1;
			while (y <= size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
