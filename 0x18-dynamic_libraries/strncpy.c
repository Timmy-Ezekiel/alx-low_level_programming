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
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
