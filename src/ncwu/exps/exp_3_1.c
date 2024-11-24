//
// Created by Levin on 2024/10/20.
//
/**
 * 已知鸡和兔的总数量为n，总腿数为m。输入n和m，依次输出鸡的数目和兔的数目。如果无解，则输出“No answer”（不要引号）。
    样例输入：14  32
    样例输出：12  2
    样例输入：10  16
    样例输出：No answer
 */
#include <stdio.h>

int main() {
    int n, m;
    int j, t;   // 鸡和兔
    scanf("%d %d", &n, &m);
    t = m / 2 - n;
    j = n - t;
    if (m % 2 == 0 && t >= 0 && j >= 0) {
        printf("%d %d", j, t);
    } else {
        printf("No answer");
    }
    return 0;
}