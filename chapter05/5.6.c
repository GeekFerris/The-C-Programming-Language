//
// Created by Macintosh on 2023/6/3.
//
#include "stdio.h"
#include "string.h"

#define MAX_LINES 5000 /* 进行排序的最大文本行数 */

char *line_ptr[MAX_LINES]; /* 指向文本行的指针数组 */

int read_lines(char *line_ptr[], int n_lines);
void write_lines(char *line_ptr[], int n_lines);
void q_sort(char *line_ptr[], int left, int right);

int main()
{
    int n_lines; /* 读取的输入行数目 */

    if ((n_lines = read_lines(line_ptr, MAX_LINES)) >= 0)
    {
        q_sort(line_ptr, 0, n_lines - 1);
        write_lines(line_ptr, n_lines);
        return 0;
    }
    printf("error: input too big to sort\n");
    return 1;
}