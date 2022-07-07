/**
 * _isalpha - Write a function that checks for alphabetic character
 * File - 4-isalpha.c
 *
 * Author; Unekwu Shaibu
 *
 * Return: Always 1 if c is a letter irrespective of case and  0 if otherwise
 *
 *
 * @c: single alphabeth input
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

