
#include "main.h"

/**
 * _puts-recursion - prints a string, followed bu a new line
 * @s: sting
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putrchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
