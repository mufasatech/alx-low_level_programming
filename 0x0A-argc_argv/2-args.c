#include <stdio.h>
#include "main.h"

/**
 *main - Print the name of the program
 *@argc: Count arguments
 *@argv: An array of a command
 *Return: 0 for (Success)
 */

int main(int argc, char *argv[])
/*Declaring variables*/
{
	int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", i, argv[i]);
}
return (0);
}
