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
 * _size - gets the size of string
 * @str: string argument
 * Return: size of str
*/
int _size(char *str)
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
 * Return: char pointer
*/
char *_tochar(int n)
{
	int i, digit, store, store2;
	char *buff;

	i = digit = 0;
	store2 = n;
	if (n < 0)
	{
		n *= -1;
	}
	store = n;
	while (store > 0)
	{
		store /= 10;
		digit++;
	}
	if (store2 < 0) 
		buff = malloc(digit + 2);
	else
		buff = malloc(digit + 1);
	store = n;
	while (i < digit)
	{
		buff[i++] = (store % 10) + 48;
		store /= 10;
	}
	if (store2 < 0)
	{
		buff[i++] = '-';
		buff[i] = '\0';
	} else
	{
		buff[i] = '\0';
	}
	rev_string(buff);
	return (buff);
}
