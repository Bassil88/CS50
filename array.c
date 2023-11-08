/**
 * arrays2.c - Letters in name
 *
 * Computer Science 50
 * Week 3
 *
 *
 * Prints each character in the name on one line
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = "Christopher";

    // code here
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", name[i]);
    }
}
