//
// Created by Levin on 2024/10/23.
//
#include <stdio.h>

int get_comm(int x, int y);

int main() {
    printf("请输入两个整数（空格隔开）：");
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    printf("%d与%d的最大公约数为%d\n", x, y, get_comm(x, y));
    return 0;
}

int get_comm(int x, int y) {
    if (x > y)
        return get_comm(x - y, y);
    else if (x < y)
        return get_comm(x, y - x);
    else
        return x;
}