#include "main.h"

/**
 * _puts_recursion- prints an input string recursively
 * @s: A string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
