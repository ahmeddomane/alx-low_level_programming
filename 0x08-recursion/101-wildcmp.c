#include "main.h"

/**
 * move_past_star - iterates past asterisk
 * @s2: the second string, can contain wildcard
 * Return: the pointer past star
*/

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - Compares two strings with wildcard support
 * @s1: The first string.
 * @s2: The second string, can contain wildcard characters
 * This function recursively compares two strings 's1' and 's2'.
 * It returns 1 if
 * the strings are identical, and 0 if they are not. The function handles
 * wildcard '*' characters in 's2' by making recursive calls. It keeps track of
 * results using the 'ret' variable
 * Return: 1 if identical, 0 if not.
*/

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - compares two strings lexicographically
 * @s1: the first string
 * @s2: the second string, can contain wilcard
 * Return: 1 if identical, 0 if flase
*/

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
