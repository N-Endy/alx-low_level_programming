#include "main.h"

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: The number to check
 *
 * Return: Returns 0 or 1 if the number is a prime or not
 */

int _is_prime_number(int n)
{
	return is_prime_recursive(n, 2);
}

/**
 * is_prime_recursive - Checks if number is a prime
 * @n: The number
 * @div: Divisor
 *
 * Return: Returns 1 or 0
 */

int is_prime_recursive(int n, int div)
{
	if (n <= 2)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_recursive(n, div + 1));
}
