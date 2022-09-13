#include "main.h"

/**
	* jack_bauer- prints time starting from 00:00 - 23:59
	*
	* @void: no parameter
	*
	* Return: void (No return value)
	*
	**/

void jack_bauer(void)
{
	int hour, min;

	hour = 0;
		while (hour < 24)
		{
			if (hour < 10)
			{
				_putchar(0 + '0');
			}
			_putchar(hour + '0');
			_putchar(':');

	min = 0;
			while (min <= 60)
			{
				if (min < 10)
				{
					_putchar(0 + '0');
				}
			_putchar(min + '0');
			_putchar('\n');
			min++;
			}
			hour++;
		}
return;
}
