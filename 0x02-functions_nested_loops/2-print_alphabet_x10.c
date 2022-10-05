#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10x, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)

{
	char j;
	int x;

	for (x = 10; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
