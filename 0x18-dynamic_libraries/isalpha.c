#include <stdio.h>

/**
  *_isalpha - checks is an input is an alphabet
  *
  *@c : input
  *
  *Return: int
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
