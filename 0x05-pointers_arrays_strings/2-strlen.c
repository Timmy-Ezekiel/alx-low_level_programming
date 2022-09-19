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
	char value[] = *s;

	len = strlen(value);
	return (len);
}
