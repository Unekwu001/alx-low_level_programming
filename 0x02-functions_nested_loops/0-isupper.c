/**
 * _islower - This function flags any thing aside lower cased alphabeth
 * File - 3-islower.c
 *
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

