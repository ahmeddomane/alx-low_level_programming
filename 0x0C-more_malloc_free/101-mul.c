#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * This program multiplies two positive numbers
 * of arbitrary length.
 * It takes two positive numbers as input in
 * base 10, multiplies them,
 * and prints the result. It uses an array to
 * store intermediate results
 * and performs digit-by-digit multiplication,
 * similar to long multiplication.
 * The program handles cases where the input
 * numbers contain non-digit characters
 * and ensures proper error handling. It also frees
 * any dynamically allocated memory.
 * Usage: mul num1 num2
 * If the number of arguments is incorrect or
 * if num1 and num2 contain non-digit
 * characters, it prints an error message
 * and exits with a status of 98.
 *
*/


/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 *
 * This function returns 1 if the input character is a digit (0-9),
 * and 0 otherwise.
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * This function multiplies num1 and num2 and prints the result.
 */

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	int *result = malloc(sizeof(int) * len_result);

	if (result == NULL)
		printf("Error\n");
		exit(98);
	/*Initialize the result array to 0*/

	for (int i = 0; i < len_result; i++)
		result[i] = 0;
	 /*Multiply the digits and add to the result*/
	for (int i = len1 - 1; i >= 0; i--)
		for (int j = len2 - 1; j >= 0; j--)
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = product + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
	/*Find the first non-zero digit in the result*/
	int start = 0;

	while (start < len_result && result[start] == 0)
		start++;
	/*Print the result*/
	if (start == len_result)
		printf("0\n");
	else
	{
		for (int i = start; i < len_result; i++)
			printf("%d", result[i]);
	printf("\n");
	}
	free(result);
}
/**
 * main - The main function of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	multiply(num1, num2);

	return (0);
}
