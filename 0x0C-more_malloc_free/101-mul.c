#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 98 if there's an error
 */

int main(int argc, char *argv[])
{
	/*Check the number of arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/*Extract number strings from arguments and validate their format*/
	char *num1_str = argv[1];
	char *num2_str = argv[2];

	for (int i = 0; num1_str[i] != '\0'; i++)
	{
		/*Check if num1_str contains only digits*/
		if (num1_str[i] < '0' || num1_str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2_str[i] != '\0'; i++)
	{
		/*Check if num2_str contains only digits*/
		if (num2_str[i] < '0' || num2_str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}
	/*Convert the number strings to integers*/
	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);
	/*Perform the multiplication operation*/
	int result = num1 * num2;
	/*Display the result*/
	printf("%d\n", result);
	return (0);
}
