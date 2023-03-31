#if !defined(MAIN_H)
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(char* format, ...);
int _size(char *str);
int _formatsize(char * str);
char* _tochar(int);
void _search_specifier(void *buffer,unsigned int *count, va_list* arg, char c);
void _char(void *buffer, unsigned int *count, int);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _string(void *buffer, unsigned int *count, char* str);
void _integer(void * buffer, unsigned int* count, int n);
void rev_string(char *);

#endif /*MAIN_H*/
