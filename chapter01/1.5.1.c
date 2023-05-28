//
// Created by Macintosh on 2023/5/28.
//
#include "stdio.h"

int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}