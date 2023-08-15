#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *	both lowercase
 * @c: takes input from other functios.
 * Return: 1 is true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (0);
	return (0);
}
