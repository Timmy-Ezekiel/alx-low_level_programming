#include <stdio.h>

/**
  * _strncpy - Copies nth character of one string to another
  *
  * @dest : first string
  * @src : the strng to be copied from
  * @n : number of byte to be copied
  *
  * Return: dest string
  *
 **/

char *_strncpy(char *dest, char *src, int n)
{
	/*Initialize needed varibles*/
	int x, y;
	/*Counts the length of dest string*/
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	/*Copies the src to dest*/
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
