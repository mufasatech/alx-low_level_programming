#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: memory area to be filled
 *@b: constant byte to be used
 *@n: number of bytes to copy to b
 *Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *s = s,
	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--
	}
	return (s);
}
