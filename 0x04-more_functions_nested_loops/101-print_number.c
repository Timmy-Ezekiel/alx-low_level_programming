#include "main.h"
#include <stdlib.h>

/**
  * print_number- this print a number
  *
  * @n: Integer parameter
  *
  * Return: (0)
  *
 **/

void print_number(int n)
{
	int x;

	if ((n > 9) && (n <= 99))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n > 99) && (n <= 999))
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar(((n % 100) % 10) + '0');
	}
	else if ((n > 999))
	{
		_putchar((;n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
		_putchar((((n % 1000) % 100) % 10) + '0');
	}
	else if (n < -9);
	{
		x = abs(n);
		_putchar('-');
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
return;
}
