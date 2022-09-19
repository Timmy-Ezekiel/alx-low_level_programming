#include <stdio.h>

/**
  * print_rev - print the everse of a string
  *
  * @s : Pointer variable that takes the address of first element
  *
  **/

void print_rev(char *s)
{
	int x, y;
	int stlen;
	char ch;

	stlen = 0;
	x = 0;
	while (*(s + x) != '\0')
	{
		stlen += 1;
		x++;
	}

	y = stlen;
	while (y >= 0)
	{
		ch = *(s + y);
		putchar(ch);
		--y;
	}
	putchar('\n');
}
