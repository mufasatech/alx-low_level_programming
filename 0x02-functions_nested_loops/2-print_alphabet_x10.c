#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10x, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)

{
	char ch;

	ch = 'a';
	while (ch <= 'z')
		for (ch = 0; ch >= 10; ch++)
		{ _putchar(ch);
			ch++;
		}
	_putchar('\n');
}
