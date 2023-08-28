#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: rows.
 * Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int t, j;

	for (t = 0; t < 8; t++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[t][j]);
		}
		_putchar('\n');
	}
}
