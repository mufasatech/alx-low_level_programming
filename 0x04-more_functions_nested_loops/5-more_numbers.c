#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */

void more_numbers(void)
{
	int x, y;

		for (y = 0; y < 15; y++)
	{
			for (x = 0; x <= 10; x++)
		{
			_putchar(y + '0');
		}
				_putchar('\n');
	}
}
