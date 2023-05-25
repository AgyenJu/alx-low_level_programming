#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * 2c: The character to point
 *
 * Return: On success 1
 * On error, -1 is return, and err no is set 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
