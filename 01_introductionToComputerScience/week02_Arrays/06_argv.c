/**
 * @file 06_argv.c
 * @brief -Mostrar como obtener argumentos para el programa desde
 *         la línea de comandos usando parámetros en la función main
 *
 */

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}