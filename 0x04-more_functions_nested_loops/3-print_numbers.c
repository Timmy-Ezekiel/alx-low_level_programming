#include "main.h"

/**
  * print_numbers- print 0 - 9 follow by new line
  *
  * Return: void;
  *
  **/

void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
return;
}
