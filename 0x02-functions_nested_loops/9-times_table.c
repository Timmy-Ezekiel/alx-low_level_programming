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
	int h, x;
	int mul, rem1, rem2;

	for (h = 0; h < 10; h++)
	{
		for (x = 0; x < 10; x++)
		{
			mul = h * x;
			if (mul > 9)
			{
				rem1 = mul % 10;
				rem2 = mul / 10;
				_putchar(rem2 + '0');
				_putchar(rem1 + '0');
				_putchar(',');
				_putchar('.');
			}
			else if ((mul == 9) || (mul == 8))
			{
				_putchar(mul + '0');
				_putchar(',');
				_putchar('.');
			}
			else
			{
				_putchar(mul + '0');
				_putchar(',');
				_putchar('.');
				_putchar('.');
				
			}
		}
		_putchar('\n');
	}
return;
}
