#include "main.h"

/**
*_strcat - a function that concates two strings
*@src:a parameter that is appended to dest
*@dest:char a parameter that is returns the concatenated string
* Return:char
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
