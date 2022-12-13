#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0
 */
int main(void)
{
	int smaller;
	int higher;

	for (higher = '0'; higher <= '9'; higher++)
	{
		for (smaller = '0'; smaller <= '9'; smaller++)
		{
			if (!((smaller == higher) || (higher > smaller)))
			{
				putchar(higher);
				putchar(smaller);
				if (!(smaller == '9' && higher == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
