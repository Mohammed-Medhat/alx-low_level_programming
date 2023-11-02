#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	char *concat = malloc(strlen(s1) + n + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
