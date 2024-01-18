#include "main.h"


/**
 * _sqrt_recursion - return natural square root
 * @n: number to calcute
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_a(n, 0));
}
/**
 * sqrt_a - calculates the natural square root of a number
 * @n: number to calculate
 * @i: iterator
 * Return: the natural square root
 */
int sqrt_a(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_a(n, i + 1));
}
