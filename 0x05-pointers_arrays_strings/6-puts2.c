#include "main.h"
#include <stdio.h>

/**
  * puts2 - This print string to standard output
  *
  * @str : a character pointer
  *
 **/

void puts2(char *str)
{
	int x;
	char ch;

	x = 0;
	while (*(str + x) != '\0')
	{
		if ((x % 2) == 0)
		{
			ch = *(str + x);
			putchar(ch);
		}
	}
	putchar('\n');
}
