/**
 * @file 03_length.c
 * @brief -implementar una función string_lenth para imprimir la longitud de un arreglo de caracteres
 *        -usar la función strlen de la bilioteca string.h y comparar
 *
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    printf("length: %d\n", string_length(name));
    printf("length: %ld\n", strlen(name));
}

int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}