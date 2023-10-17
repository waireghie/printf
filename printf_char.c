#include "main.h"

/**
 * printf_char - prints characters
 * @vic: arguments
 * Return: 1.
 */
int printf_char(va_list vic)
{
	char str;

	str = va_arg(vic, int);
	_putchar(str);
	return (1);
}
