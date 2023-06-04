//
// Created by Macintosh on 2023/6/4.
//
#include "stdio.h"
#include "string.h"

#define MAX_LINES 5000 /* 待排序的最大行数 */
char *lineptr[MAX_LINES]; /* 指向文本行的指针 */

int read_lines(char *line_prt[], int nlines);
void write_lines(char *line_ptr[], int nlines);

void qsort(void *line_prt[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);

int main(int argc, char *argv[])
{
    int nlines; /* 读入的输入行数 */
    int numeric = 0; /* 若进行数值排序 */

    if (argc > 1 && strcmp(argv[1], "-n") == 0) numeric = 1;
    if((nlines = read_lines(lineptr, MAX_LINES)) >= 0)
    {
        qsort((void **) lineptr, 0 , nlines - 1, (int (*)(void*, void *))(numeric ? numcmp : strcmp));
        write_lines(lineptr, nlines);
        return 0;
    }

    printf("input too big to sort\n");
    return 1;
}

int read_lines(char *line_prt[], int nlines)
{

}

void write_lines(char *line_ptr[], int nlines)
{

}

void qsort(void *v[], int left, int right, int (*comp)(void *, void *))
{
    int i, last;
    void swap(void *v[], int, int);

    if (left >= right) return;
    swap(v, left, right);
    last = left;
    for (i = left +1; i <=right; i++)
    {
        if ((*comp)(v[i], v[left]) < 0) swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last - 1, comp);
    qsort(v, last + 1, right, comp);

}

int numcmp(char *, char *){

}