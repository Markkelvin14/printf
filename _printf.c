#include "main.h"

int _formatsize(char *str)
{
	int i, j;

	i = j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			i += 2;
		else
			j++;
		i++;
	}
	return (j);
}

int _printf(char *format, ...)
{
	unsigned int i, j;
	unsigned int *buffer_count;
	void *buffer;
	va_list *arg;
	va_list arguments;

	va_start(arguments, format);
	arg = &arguments;
	i = j = 0;
	buffer_count = &i;
	buffer = malloc(100);

	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			_search_specifier(buffer, buffer_count, arg, format[j + 1]);
			j += 2;
		}
		else
		{
			*((char *)buffer + (*buffer_count)++) = format[j++];
		}
	}
	*((char *)buffer + *buffer_count) = '\0';
	j = write(1, buffer, _size((char *)buffer));
	free(buffer);
	return (j);
}

