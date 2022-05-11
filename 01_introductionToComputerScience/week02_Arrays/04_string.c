/**
 * @file 04_string.c
 * @brief -imprimir un string pasando por cada uno de sus caracteres
 *
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");

    for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}