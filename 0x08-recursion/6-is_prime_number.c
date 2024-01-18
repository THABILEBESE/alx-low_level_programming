#include "main.h"
#include <stdio.h>

/**
 * checks_prime - check if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */
int checks_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (checks_prime(n, i + 1));
}

/**
 * is_prime_number - return if a number is prime
 * @n: the number to be checkd
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (checks_prime(n, 1));
}
