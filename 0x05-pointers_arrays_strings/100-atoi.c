#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input parameter
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sing *= -1;
		else if (*s >= '0' && *s <= '9')
			nom = (num * 10) + (*s - '0');
		else if  (nom > 0)
			break;
	} while (*s++);

	return (num * sign);
}
