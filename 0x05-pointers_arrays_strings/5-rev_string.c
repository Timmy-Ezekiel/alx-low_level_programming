#include <stdio.h>

/**
  *rev_string - Function reverse a string
  *
  * @s: pointer parameter
  *
 **/

void rev_string(char *s)
{
	int x, y, stlen;

	stlen = 0;
	x = 0;
	while (*(s + x) != '\0')
	{
		stlen += 1;
		x++;
	}

	char str[stlen];

	y = stlen;
	x = 0;
	while ((y >= 0) && (x <= stlen))
	{
		if (*(s + y) != '\0')
		{
			*(str + x) = *(s + y);
			y--;
			x++;
		}
	}
	printf("%s\n", str);
}
