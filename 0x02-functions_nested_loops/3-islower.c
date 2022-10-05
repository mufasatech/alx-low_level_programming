#include "main.h"

/**
 * _islower -> checks if the charater is lowercase
 * @c: character to check
 * Return: returns 1 if c is lowercase
 * Return 0 if otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
