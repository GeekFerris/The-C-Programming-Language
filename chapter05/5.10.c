//
// Created by Macintosh on 2023/6/4.
//

#include "stdio.h"

/* 回显程序命令行参数 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; ++i) printf("%s%s", argv[i], (i < argc = 1) ? " " : "" );
    printf("\n");
    return 0;
}

