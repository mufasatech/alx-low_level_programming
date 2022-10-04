#include <stdo.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - Print the name of the program
 *@argc: Count arguments
 *@argv: An array of a command
 *Return: 0 for (Success)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
	printf("%s\n", argv[n]);
	}
return (0);
}
