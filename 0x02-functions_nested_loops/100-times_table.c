#include "main.h"

/**
  * print_times_table - Prints times table for user input > 0 and < 15
  *
  * @n : integer parameter
  *
  * Return: void
  *
 **/

void print_times_table(int n)
{
	int x, y, sum;

	if (!((n > 15) && (n < 0)))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <=n; y++)
			{
				sum = x * y;
				/*This conditional checks sum > 9 due to _putchar restriction*/ 
				if (sum > 9)
				{
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
				}
				else if (sum > 99)
				{
					_putchar((sum / 100) + '0');
					_putchar(((sum % 100) / 10) + '0');
					_putchar(((sum % 100) % 10) + '0');
				}
				else
				{
					_putchar(sum + '0');
				}
				/*This conditional helps create space and comma*/
					_putchar(' ');
			}
			_putchar('\n');
		} 
	}
return;
}
