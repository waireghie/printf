#include "main.h"

/**
 * printf_string - prints a string
 * @vic - argument
 * Return: the llength of a string
 */
int printf_string(va_list vic)
{
	char *str;
	int i;
	int length;

	str = va_arg(vic, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i+)
			_puchar(str[i]);
		return (length);
	}
	else
	{
		lenth = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
