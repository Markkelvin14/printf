#include <stdarg.h>
#include "main.h"

void _search_specifier(void *buffer,unsigned int *count, va_list *arg, char c)
{
	switch (c)
	{
	case 'd':
		_integer(buffer, count, va_arg(*arg, int));
		break;
	case 'i':
		_integer(buffer, count, va_arg(*arg, int));
		break;
	case 'c':
		_char(buffer, count, va_arg(*arg, int));
		break;
	case 's':
		_string(buffer, count, va_arg(*arg, char *));
		break;
	default:
		
		break;
	}
}