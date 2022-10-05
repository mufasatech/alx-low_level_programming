#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return Always 0 on success
 */

void print_alphabet_x10(void)

{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_Putchar(n);
		}
		co++;
		_putchar('\n');
		i++;
	}
}
