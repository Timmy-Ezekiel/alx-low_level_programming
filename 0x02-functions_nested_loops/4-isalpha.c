#include "main.h"
#include <ctype.h>

/**
  * _isalpha- checks if an input is alphabet
  *
  * @c : integer value
  *
  * Return: int 0 or 1;
  *
 **/

int _isalpha(int c)
{
	int x;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
