#include "main.h"

/**
  * print_diagonal - print diagonal lines
  * @n : integer parameter
  * Return: void
  *
 **/

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			y = 1;
			while (y <= (x - 1))
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
