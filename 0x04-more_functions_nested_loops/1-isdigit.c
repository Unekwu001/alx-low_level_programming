#include "main.h"
/**
 * _isdigit - This function checks for a digit from 0 through to 9
 * File - 1-isdigit.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 *
 * @c: single alphabeth input
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

