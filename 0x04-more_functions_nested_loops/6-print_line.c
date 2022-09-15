#include "main.h"

/**
  * print_line - prints undescore character "_"
  *
  * @n : integer that specifies the number of undescore.
  *
  */

void print_line(int n)
{
	int x;

	x = 0;
	if (n > 0)
	{
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
