#include "main.h"

/**
 * _strncat - function to concatenate strings
 * @dest : pointer
 * @src : pointer
 * @n : variable integer
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
        int i, j = 0;

        for (i = 0; dest[i] != '\0'; i++)
        {
                j++;
        }
        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[j] = src[i];
                j++;
        }
        return (dest);
}
