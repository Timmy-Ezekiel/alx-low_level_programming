#include "main.h"

/**
  * _isdigit - Check if a character is digit
  *
  * @c: function parameter
  *
  * Return: 0 if not digit 0-9 if return 0
  *
  **/

int _isdigit(int c)
{
	char ch;

	ch = c;
	if ((ch >= 48) && (ch <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
