#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string argument
*/
void rev_string(char *s)
{
	int i, j;
	char store;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i)
	{
		store = s[j];
		s[j] = s[i - 1];
		s[i - 1] = store;
		j++;
		i--;
	}
}

/**
 * size - gets the size of string
 * @str: string argument
*/
int _size(char* str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _tochar - converts integer to string
 * @n: integer argument
*/
char *_tochar(int n)
{
	int i, digit, store;
	char *buff;

	if (n < 0) store = n * -1;
	else store = n;
	i = digit = 0;
	while (store > 0)
	{
		store /= 10;
		digit++;
	}
	buff = malloc(digit + 1);
	store = n;
	while (i < digit)
	{
		buff[i++] = (store % 10) + 48;
		store /= 10;
		
	}
	if(n < 0)
	{
		buff[i++] = '-';
		buff[i] = '\0';
	}else
		buff[i] = '\0';
	rev_string(buff);
	return (buff);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new_size
 * Return:  pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;
	int i, size;

	i = 0, size = old_size;
	if (old_size > new_size)
		size = new_size;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	while (i < size)
	{
		*((char *)ptr_new + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (ptr_new);
}