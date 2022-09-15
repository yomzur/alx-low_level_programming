#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: int to check
 * Return: 1, print + if n is greater than zero
 * 0, print 0 if n is equal to zero
 * -1, print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
