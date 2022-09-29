#include "main.h"

int _sqrt_recursion(int n);
int _sqrt(int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number
 * Return: -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(n));
}

/**
 * _sqrt - function that return the root of a square
 * @n: Squared number
 * @x: root
 * Return: root of n
 */

int _sqrt(int n, int x)
{
	int x = 0;

	if (x > n / 2)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(x + 1));
}
