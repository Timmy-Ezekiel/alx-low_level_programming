#include "main.h"

/**
  *print_triangle- print a triangle using /
  *
  * @size: integer parameter
  *
 **/

void print_triangle(int size)
{
	int x, y;
	int space, sharp;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar
				_putchar('.');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
