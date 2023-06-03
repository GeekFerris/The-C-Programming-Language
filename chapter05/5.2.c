//
// Created by Ferris on 2023/6/3.
//
#include "ctype.h"
#include "stdio.h"

void swap(int *px, int *py);
int get_ch(void);
void un_get_ch(int);
int get_int(int *pn);

int get_int(int *pn)
{
    int c, sign;

    while(isspace(c = get_ch())) ; /* 跳过空白符 */
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        un_get_ch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-') c = get_ch();
    for (*pn = 0; isdigit(c); c = get_ch()) *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF) un_get_ch(c);
    return c;
}


void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}