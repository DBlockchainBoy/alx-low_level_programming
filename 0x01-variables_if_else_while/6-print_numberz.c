#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0
 */
int main(void)
{
	int base10_num;

	for (base10_num = '0'; base10_num <= '9'; base10_num++)
	{
		putchar(base10_num);
	}
	putchar('\n');
	return (0);
}
