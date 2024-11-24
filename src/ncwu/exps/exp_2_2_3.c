//
// Created by Levin on 2024/10/20.
//
/*
 * 3、输入一个三位数，分离出它的百位、十位和个位，反转后输出。
    样例输入：127
    样例输出：721
 * */
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int g, s, b;
    g = num % 10;
    s = num / 10 % 10;
    b = num / 100;
    printf("%d%d%d", g, s, b);
    return 0;
}