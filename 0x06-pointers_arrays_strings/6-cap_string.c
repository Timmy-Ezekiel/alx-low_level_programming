#include "stdio.h"

/**
  * cap_string - Changes all first letter of word to CAPS
  *
  * @str : string pointer
  *
  * Return: str
  *
 **/

char *cap_string(char *str)
{
	int x, y;

	x = y = 0;
	while (str[x] != '\0')
	{
		if ((str[x] == '.') || (str[x] == ' ') || (str[x] == '\n'))
		{
			x++;
			y = str[x];
			if (y >= 97 && y <= 122)
			{
				y = y - 32;
				str[x] = y;
			}
			x = x - 1;
		}
		x++;
	}
}
