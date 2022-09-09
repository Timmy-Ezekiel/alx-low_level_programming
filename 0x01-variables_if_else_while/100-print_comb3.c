#include <stdio.h>
#include <stdlib.h>

/**
	* main - Entry Point
	*
	* Return: (0) Sucess
	*
 **/

int main(void)
{
		int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == y)
			{
				;
			}
			else
			{
				putchar(x + '0');
				putchar(y + '0');
				if (!(x == 8 && y == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
				putchar('\n');
return (0);
}
