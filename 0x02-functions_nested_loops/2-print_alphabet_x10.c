#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10x, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)

{
	int j;
	int x;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (x = 0; x < 10; x++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
