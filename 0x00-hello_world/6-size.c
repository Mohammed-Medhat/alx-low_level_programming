#include <stdio.h>
/**
 *main - Entry point
 *Description:C program that use size of to print size of various types
 *Return: Alawys 0 (Success)
*/


int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
