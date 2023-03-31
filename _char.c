#include "main.h"

/**
 * _char -  writes character to main buffer from _printf()
 * @buffer: main buffer(from printf())
 * @count: index for main buffer(from _printf())
 * @char: argument from va_arg from _printf()
 */

void _char(void *buffer, unsigned int *count, int n)
{
	*((char *)buffer + (*count)++) = n;
}