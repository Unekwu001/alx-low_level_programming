/**
 * 3-islower.c - File name
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success
 * and (0) Always failure
 */
#include "main.h"
/**
 * _islower - redflags any character
 * which is not a lowercase alphabet followed by a new line
 * @c: single alphabeth input
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

