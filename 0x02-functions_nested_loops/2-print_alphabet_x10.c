#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10x, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)

{
	char ch;
	int j;

	ch = 'a';
	while (ch <= 'z')
		for (j = 0; j <= 10; j++)
		{ _putchar(ch);
			ch++;
		}
	_putchar('\n');
}
