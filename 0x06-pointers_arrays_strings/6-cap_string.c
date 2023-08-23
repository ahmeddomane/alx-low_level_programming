#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercasse
 * @c: character
 * Return: 1 if true, 0 if flase
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}


/**
 * isDelimiter - determines whether asciiis a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.|?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
