#include "main.h"

/**
 * _formatsize - gets size of format string withouth the format specifiers
 * @str: format string
 * Return: lenght of str
 */
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


/**
 * _printf - prints formated string to standard output
 * @format: format string
 * Return: lenght of printed characters
 */

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
	buffer = malloc(1024);

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

