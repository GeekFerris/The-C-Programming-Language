//
// Created by Macintosh on 2023/6/3.
//
#include "stdio.h"
#include "string.h"

#define MAX_LINES 5000 /* 进行排序的最大文本行数 */

char *lineptr[MAX_LINES] /* 指向文本行的指针数组 */

int read_lines(char *lineprt[], int nlines);
void writelines(char *linepts[], int nlines);
void qsort(char *lineptr[], int nlines);

int main()
{
    return 0;
}