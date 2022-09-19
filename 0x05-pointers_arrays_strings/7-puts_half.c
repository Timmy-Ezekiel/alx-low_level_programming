#include <stdio.h>
#include "main.h"

/**
  * puts_half - print the second half of a string
  *
  * @str : pointer to a string of character
  *
 **/

void puts_half(char *str)
{
	int x, y, stlen, newlen;
	char ch;

	stlen = 0;
	x = 0;
	while (*(str + x) != '\0')
	{
		stlen += 1;
		x++;
	}

	if (stlen % 2 == 0)
	{
		x = (stlen / 2);
		while (x < stlen)
		{
			putchar(*(str + x));
			x++;
		}
	}
	else
	{
		x = ((stlen - 1) / 2);
		while (x < stlen)
		{
			putchar(*(str + x));
			x++;
		}
	}
	putchar('\n');
}
