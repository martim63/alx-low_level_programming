#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int count = 0;

    while (argv[count] != NULL)
        count++;

    printf("%d\n", count);

    return (0);
}
