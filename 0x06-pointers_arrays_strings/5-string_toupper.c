#include <stdio.h>

/**
  * string_toupper - change lower to upper
  *
  * @str : string to be checked
  *
  * Return: char pointer
  *
 **/

char *string_toupper(char *str)
{
	int x, y;

	x = y = 0;
	while (str[x] != '\0')
	{
		y = str[x];
		if ((y >= 97) && (y <= 122))
		{
			y = y - 32;
			str[x] = y;
		}
		x++;
	}
	return (str);
}
