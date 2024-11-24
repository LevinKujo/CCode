//
// Created by Levin on 2024/10/31.
//
#include <stdio.h>

void print_arr(int (*p)[5], int rows, int cols);

int main() {
    int arr[3][5] = {
            {1,   2,   3,   4,   5},
            {11,  22,  33,  44,  55},
            {111, 222, 333, 444, 555}
    };
    print_arr(arr, 3, 5);
    return 0;
}

void print_arr(int(*p)[5], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", *(*p + j));
        }
        printf("\n");
        p++;
    }
}