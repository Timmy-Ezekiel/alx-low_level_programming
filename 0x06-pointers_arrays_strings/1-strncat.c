#include <stdio.h>

/**
  * _strncat - concatenate two strings.
  *
  * @dest : first string
  * @src : second string
  * @n: number of byte to concatenated from string @src
  *
  * Return: dest always
  *
 **/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;
	/*Gets the length of @dest string*/
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	/*Concatenates n character of src to dest*/
	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
}
