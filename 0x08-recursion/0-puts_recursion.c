
#include "main.h"

/**
 * _puts-recursion - prints a string, followed bu a new line
 * @s: sting
 * Return: Always (0)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putrchar('\n');
	else
	}
		_putchar(*s);
		_puts_recurcsion(++s);
}
}
