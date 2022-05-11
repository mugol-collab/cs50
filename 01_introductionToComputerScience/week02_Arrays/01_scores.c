#include <stdio.h>
#include <cs50.h>

int main()
{
    int add = 0;

    int n = get_int("Scores: ");

    // int n = 3;
    int scores[n];

    for (size_t i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
        add += scores[i];
    }
    // printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    printf("Average: %.2f\n", (float)add / n);
}