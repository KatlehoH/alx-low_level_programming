#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Counts Arguments
 * @argv: Arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
