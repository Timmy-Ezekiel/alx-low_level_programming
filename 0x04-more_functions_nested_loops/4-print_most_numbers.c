#include "main.h"

/**
  * print_most_numbers- prints 0 - 9 ommiting 2 and 4
  *
  * Return: zero
  *
  **/

void print_most_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		if ((x != 2) && (x != 4))
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
