#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: this is a string pointer
 * Return: i
 */
int _strlen(char *str)
{
	int i;
	for (i = 0; str[i] != 0; i++);
	return (i);
}

/**
 * _strlen2 - strlen funtion for connst
 * @str: char pointer
 * Return: i
 */

int _strlen2(const char *str)
{
	int i;

	for (i = 0; str[i] !=0; i++);
	return (i);
}
