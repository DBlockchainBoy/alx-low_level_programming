#include "main.h"

/**
 * print_sign- Prints the sign of a number entered
 * @n: Stores the number entered
 * Return: 1 if n greter than 0, 0 if n equal 0, -1 if n less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
