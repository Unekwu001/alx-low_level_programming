#include "main.h"
/**
 * _isupper - This function flags any thing aside lower cased alphabeth
 * File - 0-isupper.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 *
 * @c: single alphabeth input
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

