#include <stdio.h>
#include <string.h>

/**
  * _strlen - calculates and return length of a string
  *
  * @s: character pointer varible to the string of character
  *
  * Return: always length of string
  *
  **/

int _strlen(char *s)
{
	int len;
	int x;
	int n = 0;

	x = 0;
	while (*(s + x) != '\0')
	{
		n += 1;
		x++;
	}
	len = n;
	return (len);
}
