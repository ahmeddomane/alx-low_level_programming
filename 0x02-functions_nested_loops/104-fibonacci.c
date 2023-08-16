#include"main.h"
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initialos;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
			initialos = numLength(mx) - 1 - numLength(f1);

		while (flo > 0 && initialos > 0)
		{
			printf("%d", 0);
			initialos--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = flo + f2o + (f1 + f2) / mx;
		fl = f2;
		flo = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
