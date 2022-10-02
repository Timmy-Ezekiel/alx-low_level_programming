#include <stdio.h>

/**
  * leet - Encodes a string to 1337
  *
  * @str : string pointer
  * Return: return str
  *
 **/

char *leet(char *str)
{
	int i, j;
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
