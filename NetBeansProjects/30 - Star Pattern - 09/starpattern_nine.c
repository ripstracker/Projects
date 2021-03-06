#include "starpattern_nine.h"

void draw_using_for_loop()
{
    char pattern[] = "* * * * * * * * *";
    int i, pos = 0;
    for (i = 0; i < 9; i++)
    {
        printf("%s\n", pattern);
        if (i < 4)
        {
            *(pattern + 8 - pos) = ' ';
            *(pattern + 8 + pos) = ' ';
            pos += 2;
        }
        else
        {
            pos -= 2;
            *(pattern + 8 - pos) = *(pattern + 8 + pos)
                    = *(pattern + 8 - (2 + pos));
        }
    }
}

void draw_using_while_loop()
{
    char pattern[] = "* * * * * * * * *";
    int i = 0, pos = 0;
    while (i < 9)
    {
        printf("%s\n", pattern);
        if (i < 4)
        {
            *(pattern + 8 - pos) = ' ';
            *(pattern + 8 + pos) = ' ';
            pos += 2;
        }
        else
        {
            pos -= 2;
            *(pattern + 8 - pos) = *(pattern + 8 + pos)
                    = *(pattern + 8 - (2 + pos));
        }
        i++;
    }
}

void draw_using_do_while_loop()
{
    char pattern[] = "* * * * * * * * *";
    int i = 0, pos = 0;
    do
    {
        printf("%s\n", pattern);
        if (i < 4)
        {
            *(pattern + 8 - pos) = ' ';
            *(pattern + 8 + pos) = ' ';
            pos += 2;
        }
        else
        {
            pos -= 2;
            *(pattern + 8 - pos) = *(pattern + 8 + pos)
                    = *(pattern + 8 - (2 + pos));
        }
        i++;
    }
    while (i < 9);
}

void draw_using_recursion(int no_of_lines)
{
    static char pattern[] = "* * * * * * * * *";
    static int pos = 0;
    if (no_of_lines == 9)
        return;
    else
    {
        printf("%s\n", pattern);
        if (no_of_lines < 4)
        {
            *(pattern + 8 - pos) = ' ';
            *(pattern + 8 + pos) = ' ';
            pos += 2;
        }
        else
        {
            pos -= 2;
            *(pattern + 8 - pos) = *(pattern + 8 + pos)
                    = *(pattern + 8 - (2 + pos));
        }
    }
    draw_using_recursion(no_of_lines+1);
}

