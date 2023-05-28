//
// Created by Macintosh on 2023/5/27.
//
#define LOWER 0 /* 温度表的下限 */
#define UPPER 300 /* 温度表的上限 */
#define STEP 20 /* 步长 */

#include <stdio.h>

int main() {
    int fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += STEP;
    }

    for (fahr = 0; fahr < 300; fahr += STEP) printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}