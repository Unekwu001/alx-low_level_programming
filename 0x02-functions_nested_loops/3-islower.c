/**
 * File - 3-islower.c
 *_islower: This function flags an alphabet that is not a lowercase alphabet
 * Author; Unekwu Shaibu
 *
 * Return: Always (1) Success and (0) Always failure
 *
 *
 * @c: single alphabeth input
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

