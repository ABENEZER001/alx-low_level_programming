#include "main.h"

/**
 * _puts - function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
