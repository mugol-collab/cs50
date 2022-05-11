/**
 * @file 05_uppercase.c
 * @brief -Implementar una rotina para convertir de minúsculas a mayúsculas
 *        - utilizar la función toupper() de la biblioteca ctype.h y comparar
 *        - APRENDER A NO QUERER REINVENTAR LA RUEDA - DEBES REUTILIZAR!!
 *
 */
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before:");

    printf("After: ");
    for (size_t i = 0, n = strlen(s); i < n; i++)
    {
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", s[i] - 32);
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }

        printf("%c", toupper(s[i]));
    }
    printf("\n");
}