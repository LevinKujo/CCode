//
// Created by Levin on 2024/10/21.
//
/*
 * 一个数如果恰好等于它的因子之和，这个数就称为“完数”。
 * 例如6的因子为1,2,3，而6=1+2+3，因此6是“完数”。编程找出1000之内的所有完数，输出所有的完数（要求：一行显示6个数）；
 */
#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 1000; ++i) //循环1000内的数
    {
        int sum = 0;                // 不包含本身的所有因子和
        for (int j = 1; j <= i / 2; ++j) {
            if (i % j == 0)
                sum += j;
        }
        if (count % 6 == 0 && count != 0)
            printf("\n");
        if (sum == i) {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}