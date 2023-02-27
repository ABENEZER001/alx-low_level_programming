#include "main.h"

/**
 * _puts - function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
