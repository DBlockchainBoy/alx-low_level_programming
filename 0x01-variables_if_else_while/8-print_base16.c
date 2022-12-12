#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0
 */
int main(void)
{
	int oct_num;
	char oct_alph;

	for (oct_num = '0'; oct_num <= '9'; oct_num++)
		putchar(oct_num);
	for (oct_alph = 'a'; oct_alph <= 'f'; oct_alph++)
		putchar(oct_alph);
	putchar('\n');
	return (0);
}
