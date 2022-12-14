#include "main.h"

/**
 * alphabet- Will print the english alphabet
 * Return: Always 0
 */
char alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (alph);
}
