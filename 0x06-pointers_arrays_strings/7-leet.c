#include <stdio.h>

/**
  * leet - Encodes a string to 1337
  *
  * @str : string pointer
  * Return: return str
  *
 **/

char *leet(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if ((y == 65) || (y == 97))
		{
			str[x] = 52;
		}
		else if ((y == 69) || (y == 101))
		{
			str[x] = 51;
		}
		else if ((y == 79) || (y == 111))
		{
			str[x] = 48;
		}
		else if ((y == 84) || (y == 116))
		{
			str[x] = 55;
		}
		else if ((y == 76) || (y == 108))
		{
			str[x] = 49;
		}
		else
		{
			continue;
		}
		x++;
	}
	return (str);
}
