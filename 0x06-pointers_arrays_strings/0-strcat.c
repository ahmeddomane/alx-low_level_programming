#include "main.h"

/**
 * _strcat - function that concatenates
 *	two strings.
 * @dest: pionter to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[2];

	return (dest);
}
