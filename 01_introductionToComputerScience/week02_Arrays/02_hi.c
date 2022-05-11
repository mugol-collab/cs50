/**
 * @file 02_hi.c
 * @brief - Mostrar que un string es un arreglos de caracteres
 *        - Mostrar que \n también es un caracter con valor ASCII
 *        - verificar la inclusión del caracter nulo al final de un arreglos de caracteres
 *
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!\n";
    printf("%c%c%c%c\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4]);
}