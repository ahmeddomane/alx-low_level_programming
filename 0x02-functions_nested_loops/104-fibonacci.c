#include"main.h"
<<<<<<< HEAD

=======
>>>>>>> 5fadee7e79068d146203a8ebf936267ac0136b68
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
<<<<<<< HEAD
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f20 = 0, sumo = 0;
=======
	int count, initialos;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f2o = 0, sumo = 0;
>>>>>>> 5fadee7e79068d146203a8ebf936267ac0136b68

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
<<<<<<< HEAD
			initialos numLength(mx) - 1 - numLength(f1);

		while (flo > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
=======
			initialos = numLength(mx) - 1 - numLength(f1);

		while (flo > 0 && initialos > 0)
		{
			printf("%d", 0);
			initialos--;
>>>>>>> 5fadee7e79068d146203a8ebf936267ac0136b68
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
<<<<<<< HEAD

		sumo = flo + f20 + (F1 + f2) / mx;
		fl = f2;
		flo = f20;
		f2 = sum;
		f20 = sumo;
=======
		sumo = flo + f2o + (f1 + f2) / mx;
		fl = f2;
		flo = f2o;
		f2 = sum;
		f2o = sumo;
>>>>>>> 5fadee7e79068d146203a8ebf936267ac0136b68

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
