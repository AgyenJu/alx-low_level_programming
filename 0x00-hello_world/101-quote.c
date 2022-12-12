#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korper, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", s);
	return (1);
}
