#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints minimum number of coins to make change of an amount of money
 * @argc: Number of arguments
 * @argv: Array of strings for arguments
 *
 * Return: Return
 */
int main(int argc, char *argv[])
{
	int i;

	/* Number of arguments not exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Amount of cents to give back */
	int cents = atoi(argv[1]);

	/* Amount is negative*/
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Array to store value of coins */
	int coins[] = {25, 10, 5, 2, 1};

	/* Variables to store the number of coins of each value */
	int num_coins = 0;
	int num_values = sizeof(coins) / sizeof(int); /* number of coin value */

	/* Iterate through coin array */
	for (i = 0; i < num_values; i++)
	{
		int value = coins[i]; /* Get current coin value */

		while (cent >= value)
		{
			cents -= value;
			num_coins++;
		}
	}
	/* Print the total number of coins */
	printf("%d\n", num_coins);
	return (0);
}
