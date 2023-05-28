//
// Created by Macintosh on 2023/5/27.
//
#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* 温度表的下限 */
    upper = 300;  /* 温度表的上限 */
    step = 20;  /* 步长 */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }

    for (fahr = 0; fahr < 300; fahr++) printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}