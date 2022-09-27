#include <stdio.h>

/**
  * print_chessboard - prints a chessboard
  *
  * @a : 2-D Array pointer
  *
  *Return: void Success
  *
 **/

void print_chessboard(char (*a)[8])
{
	int x, y

	x = y = 0;
	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
