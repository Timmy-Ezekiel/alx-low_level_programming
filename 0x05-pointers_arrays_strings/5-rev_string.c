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
/* saving the reverse form of the char string in a new char variable */
	char str[stlen];

	y = stlen - 1;
	x = 0;
	while ((y >= 0) && (x < stlen))
	{
		*(str + x) = *(s + y);
		y--;
		x++;
	}
/*Changing the character string to a reversed char string*/
	x = 0;
	while (x < stlen)
	{
		*(s + x) = *(str + x);
		x++;
	}
}
