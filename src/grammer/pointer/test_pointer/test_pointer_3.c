//
// Created by Levin on 2024/10/31.
//
#include <stdio.h>

void print_arr(char(*p)[5], int rows);

int main() {
    char arr[5][5] = {
            "hello",
            "c",
            "c",
            "pro",
            "pro"
    };
    print_arr(arr, 5);
    return 0;
}

void print_arr(char(*p)[5], int rows) {
    for (int i = 0; i < rows; ++i) {
        printf("%s\n", *(p + i));
    }
}
