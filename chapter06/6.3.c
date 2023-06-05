//
// Created by Macintosh on 2023/6/4.
//
#include "stdio.h"
#include "ctype.h"
#include "string.h"

struct key {
    char *word;
    int count;
};

#define MAX_WORD 100
/* c语言共32个关键字 */
#define NKEYS 32

struct key keytab[NKEYS];

int get_word(char *, int);

int bin_search(char *, struct key *, int);

/* 统计c语言关键字的出现次数 */
int main() {
    int n;
    char word[MAX_WORD];

    while (get_word(word, MAX_WORD) != EOF) {
        if (isalpha(word[0])) {
            if ((n = bin_search(word, keytab, NKEYS) >= 0) {
                keytab[n].count++;
            }
        }
    }

    return 0;
}