//
// Created by Macintosh on 2023/6/4.
//
struct point {
    int x;
    int y;
};

struct point make_point(int x, int y)
{
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}