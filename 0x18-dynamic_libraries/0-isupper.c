#include "main.h"

/**
  * _isupper - Checks the case of a character input
  *
  * @c : A character input that will be converted to integer.
  *
  * Return: 0 if not upper else returns 1
  *
  **/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
