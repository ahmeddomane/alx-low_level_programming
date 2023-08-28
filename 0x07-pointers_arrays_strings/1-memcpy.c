#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: soorce
 * @n: length of src to be copied
 * Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
