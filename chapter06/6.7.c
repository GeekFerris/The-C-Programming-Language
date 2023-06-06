//
// Created by Macintosh on 2023/6/6.
//
#include "stdlib.h"

typedef int Length;

Length len, maxlen;
Length * lengths[];

typedef char *String;

String alloc(int);
int strcmp(String, String);

typedef struct tnode * Treeptr;

typedef struct tnode {
    char *word;
    int count;
    Treeptr left;
    Treeptr right;
} Treenode;

typedef int (*PFI) (char *, char *);