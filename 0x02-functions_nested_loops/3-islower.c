#include "main.h"
/**
 * _islower- Checks for a lower case character
 * @c: store the character
 * Return: 1 on success and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
