#include <stdo.h>
#include "main.h"

/**
 *main - Print the name of the program
 *@argc: Count arguments
 *@argv: An array of a command
 *Return: 0 for (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
			printf("%s\n", argv[count]);
	}
return (0);
}
