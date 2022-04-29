
#include "main.h"

/**
 * _puts-recursion - prints a string followed by a new line
 * @s: string
 * Return: Always (0)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	_putrchar('\n');
	else
	{
		_putchar(*s);
		_puts_recurcsion(++s);
}
}
