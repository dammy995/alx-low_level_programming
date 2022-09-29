#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 * @x: Number
 * @y: Power number
 * Return: -1 If y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x ** y);
}
