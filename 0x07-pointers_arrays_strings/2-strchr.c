#include <stdio.h>

/**
  *_strchar - locates a character in a string
  *
  * @s : String pointer
  * @c : Character to be found
  *
  * Return: s Success
  *
 **/

char *_strchr(char *s, char c)
{
	int a;

	while(1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a = 0)
		{
			return (NULL);
		}
	}
}
