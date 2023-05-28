//
// Created by Ferris on 2023/5/29.
//
#include "stdio.h"

#define MAXLINE 100

int main()
{
    double sum, atof(char []);
    char line[MAXLINE];
    int getLine(char line[], int max);

    sum = 0;
    while (getLine(line, MAXLINE) > 0) printf("\t%g\n", sum += atof(line));

    return 0;
}