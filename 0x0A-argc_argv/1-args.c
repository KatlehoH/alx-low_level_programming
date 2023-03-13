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
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);


	return (0);
}
