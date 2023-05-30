#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longI = 0;
	int o;

	while (*s != '\0')
	{
		longI++;
		s++;
	}
	s--;
	for (o = longI; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
