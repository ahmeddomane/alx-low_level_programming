#include "main.h"

/**
 * *_strchr - fills memoty with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
		{
			return (s + t);
		}
	}

	return ('\0');
}
