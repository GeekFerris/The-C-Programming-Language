//
// Created by Ferris on 2023/5/29.
//
#include "stdio.h"
#define MAXLINE 1000 /* 最大输入行数 */

int get_line(char line[], int max);
int str_index(char source[], char searchfor[]);

char pattern[] = "ould"; /* 带查找的模式 */

int main()
{
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') s[i++] = c;
    if (c == '\n') s[i++] = c;
    s[i] = '\0';
    return i;
}


int str_index(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k >0 && t[k] == '\0') return i;
    }
    return -1;
}