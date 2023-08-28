#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, j;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (j = 0; accept[j] != s[t]; j++)
		{
			if (accept[j] == '\0')
				return (t);
		}
	}
	return (t);
}
