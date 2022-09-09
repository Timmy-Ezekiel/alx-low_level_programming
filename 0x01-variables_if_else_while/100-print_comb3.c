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

		for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (!(x == 9 && y == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
				putchar('\n');
return (0);
}
