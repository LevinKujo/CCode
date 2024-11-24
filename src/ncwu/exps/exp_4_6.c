//
// Created by Levin on 2024/10/21.
//
//6.输入两个正整数m和n，求其最大公约数和最小公倍数。
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    // m > n
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    for (int i = n; i > 0; --i) {
        if (n % i == 0 && m % i == 0) {
            printf("最大公约数为：%d\n", i);
            break;
        }
    }
    int fact = m;
    while (1) {
        if (fact % m == 0 && fact % n == 0) {
            printf("最小公倍数为：%d\n", fact);
            break;
        }
        fact++;
    }
    return 0;
}