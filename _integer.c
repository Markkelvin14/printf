#include "main.h"

/**
 * _integer - insert formated integer argument into the main buffer
 * from _printf()
 * @buffer: main buffer(from printf())
 * @count: index for main buffer(from _printf())
 * @n: argument (from va_arg) from _printf()
*/
void _integer(void *buffer, unsigned int *count, int n)
{
	char *buff;
	int i, size;

	buff = _tochar(n);
	size = _size(buff);
	i = 0;
	while (i < size)
	{
		*((char *)buffer + (*count)++) = buff[i++];
	}
}

