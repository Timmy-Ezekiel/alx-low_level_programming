#include "main.h"
#include <stdio.h>

/**
  * times_table - Print the timestable of 0 - 9
  *
  * return : void;
  *
 **/

void times_table(void)
{
	int x, y;
	int sum;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			sum = x * y;
			if (sum > 9)
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
			else
			{
				_putchar(sum + '0');
			}
			if (((x < 2) && (y != 9)) || ((x > 1) && (sum < 8) && (x < 5)))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((x > 4) && (sum == 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
return;
}
