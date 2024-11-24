//
// Created by Levin on 2024/10/22.
//
//3、输出以下的杨辉三角形（要求输出10行）。
//               1
//               1    1
//               1    2    1
//               1    3    3    1
//               1    4    6    4    1
//               1    5    10   10   5   1
//               ......
#include <stdio.h>

int main() {
    int yang[10][10] = {0};
    for (int i = 0; i < sizeof(yang) / sizeof(yang[0]); ++i) {
        yang[i][0] = 1;
        yang[i][i] = 1;
        for (int j = 0; j <= i; ++j) {
            if (i != 0)
                yang[i][j] = yang[i - 1][j - 1] + yang[i - 1][j];
        }
    }
    for (int i = 0; i < sizeof(yang) / sizeof(yang[0]); ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d\t", yang[i][j]);
        }
        printf("\n");
    }
    return 0;
}