#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
/**
  * str_concat - Concatenate Two strings
  *
  * @s1 : First String
  * @s2 : Second string
  *
  * Return: A new String from the two string.
  *
 **/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y; /*Variables to store the length of strings*/
	int a, b; /*Varibles for loops*/
	/*Get the length of the two strings*/
	x = 0;
	if (s1 != NULL)
	{
		while (s1[x] != '\0')
		{
			x++;
		}
	}
	else
	{
		x = 0;
	}
	y = 0;
	if (s2 != NULL)
	{
		while (s2[y] != '\0')
		{
			y++;
		}
	}
	else
	{
		y = 0;
	}
	/*Allocate memory to the new string*/
	concat = malloc((x + y + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	/*Copy each string to the new string*/
	a = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
