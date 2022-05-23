#include "main.h"
#include <stdarg.h>

int _print_int(va_list args)
{
    int number = va_arg(args, int);
    int size, digit, result;
	long c, sign;

	sign = 1;
	digit = 0;
	size = 1;
	c = number;
	result = 0;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		c *= sign;
		result++;
	}

	for (; c >= 10; size++)
	{
		c = c / 10;
	}

	c = sign * (long)number;

	while (size >= 2)
	{
		digit = (c / exponent(10, size - 1));
		_putchar(digit + '0');
		c = c % exponent(10, size - 1);
		size--;
		result++;
	}
	_putchar(c % 10 + '0');
	result++;
	return (result);
}
/**
 * exponent - calculates the exponent
 *
 * @x: int x
 * @y: int y
 * Return: int
 */
int exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * exponent(x, y - 1));
}
