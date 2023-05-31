//
// Created by Ferris on 2023/5/31.
//

#include "stdio.h"
#include "stdlib.h"

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0) push(pop() / op2);
                else printf("error: unknown command %s\n", s);
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);

        }
    }

    return 0;
}
/* 栈val的最大深度 */
#define MAXVAL 100
/* 值栈 */
double val[MAXVAL];
/* 下一个空闲栈位置 */
int sp = 0;
/* 把f压入栈中 */
void push(double f)
{
    if (sp < MAXVAL) val[sp++] = f;
    else printf("error: stack full, can't push %g\n", f);
}

/* 弹出并返回栈顶的值 */
double pop(void)
{
    if (sp > 0) return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}