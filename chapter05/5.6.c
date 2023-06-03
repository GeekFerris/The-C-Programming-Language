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

#define MAX_LEN 1000 /* 每个输入文本行的最大长度 */
int get_line(char *, int);
char *alloc(int);

/* 读取输入行 */
int read_lines(char *line_ptr[], int max_lines)
{
    int len, n_lines;
    char *p, line[MAX_LEN];
    n_lines = 0;
    while ((len = get_line(line, MAX_LEN)) > 0)
    {
        if (n_lines >= max_lines || (p = alloc(len)) == NULL) return -1;
        line[len - 1] = '\0'; /* 删除换行符 */
        stpcpy(p, line);
        line_ptr[n_lines++] = p;
    }
    return n_lines;
}

/* 写输出行 */
void write_lines(char *line_ptr[], int n_lines)
{
    int i;

    for (i = 0; i < n_lines; ++i) printf("%s\n", line_ptr[i]);
}

/* 递增顺序排序 */
void q_sort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);


    if(left >= right) return; /* 如果数组元素的个数小于2 则返回 */
    swap(v, left, (left + right) /2);
    last = left;

    for (i = left + 1; i <= right; ++i)
    {
        if (strcmp(v[i], v[left]) < 0) swap(v, ++last, i);
        swap(v, left, last);
        q_sort(v, left, last - 1);
        q_sort(v, last + 1, right);
    }
}

void swap(char *v[], int i , int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
