#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Duplicate a given String and give a pointer to the new one.
  *
  * @str : A string pointer
  *
  * Return: The new Duplicate string
  *
 **/

char *_strdup(char *str)
{
	char *newStr;
	int x, y;
	/*checks and get the length of the string.*/
	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	newStr = malloc((x + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	for (y = 0; y < (x + 1); y++)
	{
		newStr[y] = str[y];
	}
	return (newStr);
}
