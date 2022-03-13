#include <stdio.h>
// #include "libcs50-10.1.1/src/cs50.h"
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's yout name?");
    printf("Hello, %s\n", answer);
}