#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */

void more_numbers(void)
{
	int x, y;

		for (x = 0; x < 10; x++)
	{
			for (y = 0; y <= 14; y++)
		{
			_putchar(y);
		}
				_putchar('\n');
	}
}
