#include <stdio.h>

/**
  * _strcat - Function concatenate two strings and return a pointer
  *
  * @dest : The first String pointer
  * @src : The string to be concatenated to the first.
  *
  * Return: dest address (pointer) Success
  *
 **/

char *_strcat(char *dest, char *src)
{
	/*Decalaration of needed varibles*/
	int x, y;
	/*Counting the length of the first string*/
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	/*concatenating string src to dest*/
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
		dest[x] = '\0';
	/*returning the dest pointer*/
	return (dest);
}
