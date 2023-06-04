//
// Created by Macintosh on 2023/6/4.
//
struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point make_point(int, int);

struct point make_point(int x, int y) {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

struct rect screen;
struct point middle;

/* 两个点相加 */
struct point add_point(struct point p1, struct point p2) {
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

/* 如果点p在举行r内，则返回1，否则返回0 */
int pt_in_rect(struct point p, struct rect r) {
    return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}
