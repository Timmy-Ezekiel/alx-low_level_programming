#include "main.h"
#include <stdlib.h>

/**
  *print_binary - Print the binary equivalent of an int
  *
  *@n : Unsigned integer
  *
 **/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		if (n == 1)
		{
			_putchar(1 + '0');
		}
		else
		{
			print_binary(n / 2);
			_putchar((n % 2) + '0');
		}
	}
}
