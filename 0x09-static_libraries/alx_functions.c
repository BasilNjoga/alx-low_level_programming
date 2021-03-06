#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 *
 *@c: The int to print
 * Return: Always 0.
 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}

else
{
return (0);
}

}
#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 *@n: The int to print
 * Return: Always 0.
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}

/**
 * _isupper - checks for uppercase letters
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
		return (1);
		}
	}

	return (0);
}

/**
 * _isdigit - checks for digits letters
 *
 * @c: contains value to be checked
 *
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (num == c)
	{
	return (1);
	}
	}

	return (0);
}


/**
 * _strlen - returns the length
 *
 * strlen - gives the length of string
 *
 * @s: string to be measured
 *
 * Return: Always 0 - success
 */

int _strlen(char *s)
{
	int stringlen;

	stringlen = strlen(s);
	return (stringlen);
}


/**
 * _puts - prints a strint to the standar output
 *
 * strlen - gives the length of the string
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}


/**
 * *_strcpy - copies one string to another
 *
 * strlen - gives the length of the string
 *
 * @dest: buffer string
 *
 * @src: source string
 *
 * Return: Always 0 - Success
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
}

/**
* _atoi - converts an integer character into an integer
*
* @s: character to be converted
*
* Return: always 0 - success
*/

int _atoi(char *s)
{
	
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}


/**
 * *_strncat - concatenates two strings
 *
 * strlen - gives the lenght of a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes
 *
 * Return: Always 0 - success
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	int k;

	len = strlen(dest);
	k = 0;
	if (dest[len] == '\0')
	{
	for (i = len; i < (len + n); i++)
	{
	dest[i] =  src[k];
	k++;
	}
	}
	else
	{
	for (i = len + 1; i <= (len + n); i++)
	{
	dest[i] = src[k];
	k++;
	}
	}
	return (dest);
}


/**
 * *_strcat - concatenates two strings
 *
 * strlen - gives the lenght of a string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: Always 0 - success
 */

char *_strcat(char *dest, char *src)
{
	int len, len2;
	int i;
	int n;

	len = strlen(dest);
	len2 = strlen(src);
	n = 0;
	for (i = len; i < len + len2; i++)
	{
	dest[i] =  src[n];
	n++;
	}

	return (dest);
}


/**
 * *_strncpy -  copies a string onto another
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: integer to be copied
 *
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	k = 0;
	for (i = 0; i < n; i++)
	{
	dest[i] = src[k];
	k++;
	}
	return (dest);
}


/**
 * _strcmp - compares two strings
 *
 * strlen - gives the length of the string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len;

	len = strlen(s1);
	for (i = 0; i < len; i++)
	{
	if (s1[i] != s2[i])
	{
	return (1);
	}
	}
	return (0);
}


/**
 *_memset - fills the first n bytes with a constant byte
 *
 * @s: memory
 * @b: character to fill
 * @n: number of bytes to be fill it
 *
 * Return: always 0 - success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}


/**
 * _memcpy - copies memory area
 *
 * @dest: place to be copied to
 * @src: bytes to be coped from
 * @n: number of bytes to be coped
 *
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}


/**
 * _strchr - locates a string
 *
 * @s:pointer to the first occurrence of the string
 * @c: string to be searched for
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}


/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < a_len; j++)
			if (s[i] == accept[j])
				len++, j = a_len;
			else
				if (j == a_len - 1)
					goto exit;
exit: return (len);
}


/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}


/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
