#include "main.h"

/**
 * _integer - insert string argument into the main buffer from _printf()
 * @buffer: main buffer from printf()
 * @count: index for main buffer from _printf()
 * @n: char* argument (from va_arg) from _printf()
 */

void _string(void *buffer, unsigned int *count, char *str)
{
	int i, size;

	size = _size(str);
	/*buffer = _realloc(buffer, sizeof(buffer), sizeof(buffer) + size);*/
	i = 0;
	while (i < size)
	{
		*((char *)buffer + (*count)++) = str[i++];
	}
}