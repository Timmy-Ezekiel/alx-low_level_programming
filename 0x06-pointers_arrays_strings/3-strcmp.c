#include <stdio.h>

/**
  * _strcmp - compare two strings
  *
  * @s1 : first string
  * @s2 : second string
  *
  * Return: interger (n) Success
  *
 **/

int _strcmp(char *s1, char *s2)
{
	int x, y, answer;
	/*Counts first string s1*/
	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	/*Counts second string s2*/
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	answer = (x - y) * 15;
	return (answer);
}
