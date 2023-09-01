#include"main.h"

/**
 * _islower - function to check if character is lowercase
 * Return: 1 if 'c' is lowercase other always 0 (success)
 * @c: checks input of function
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
