//
// Created by Ferris on 2023/6/3.
//

#include "stdlib.h"

int main()
{
    int x = 1, y = 2, z[10];

    int *ip; /* ip是指向int类型的指針 */
    ip = &x; /* ip现在指向x */
    y = *ip; /* y的值现在是1 */
    *ip = 0; /* x的值现在是0 */
    ip = &z[0]; /* ip现在指向z[0] */
    return 0;
}
