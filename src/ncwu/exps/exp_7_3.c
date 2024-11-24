//
// Created by Levin on 2024/10/27.
//
#include <stdio.h>

#define N 100

void printAns(char *str, int *m, int *count);

int main() {
    char str[N] = {0};
    int m[N] = {0};
    int count = 0;
    fgets(str, N, stdin);
    printAns(str, m, &count);
    return 0;
}

void printAns(char *str, int *m, int *count) {
    int num = 0;
    int flag = 0;
    for (int i = 0; '\n' != *(str + i); ++i) {
        if (*(str + i) >= '0' && *(str + i) <= '9') {
            flag = 1;
            num = num * 10 + ((int) (*(str + i))) - 48;
            if (0 == num && !(*(str + i + 1) >= '0' && *(str + i + 1) <= '9')) {
                *(m + (*count)++) = num;
                flag = 0;
            }
        } else {
            if (flag) {
                *(m + (*count)++) = num;
                num = 0;
                flag = 0;
            }
        }
        if (flag && ('\n' == *(str + i + 1)))
            *(m + (*count)++) = num;
    }
    printf("一共有%d个整数，分别是", *count);
    for (int i = 0; i < *count; ++i) {
        printf(" %d", m[i]);
    }
}