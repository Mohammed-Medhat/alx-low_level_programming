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
    char *i;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if(s2 == NULL)
    {
        s2 = "";
    }
    i = malloc(sizeof(s1)+sizeof(s2)+1);
    if (i = NULL)
    {
        return(NULL);
    }
    for (int f = 0; f<sizeof(s1); f++)
    {
        i[f] = s1[f];
    }
     for (int f = 0; f<sizeof(s2); f++)
     {
        i[f+sizeof(s1)] = s2[f];
        i[sizeof(s1)+sizeof(s2)] = '\0';
    }
    return(i);

}
