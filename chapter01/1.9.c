//
// Created by Macintosh on 2023/5/28.
//
#include "stdio.h"
#define MAXLINE 1000 /* 允许的输入行最大长度 */

int get_line(char s[], int lim);
void copy(char to[], char from[]);

int main()
{
    /* 当前行长度 目前为止发现的最长行的长度 */
    int len, max;
    /* 当前输入行 */
    char line[MAXLINE];
    /* 用于保存最长的行 */
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    /* 存在这样的行 */
    if (max > 0) printf("%s", longest);
    return 0;
}

/* 将一行读入s中并返回其长度 */
int get_line(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* 将from复制到to，这里假定to足够大 */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0') ++i;
}
